#include "Mapf.h"
#include <Servo.h>
#include <PID_v2.h>

Servo servo1;
Servo servo2;

//motor
/**set control port**/
const int E1Pin = 10;
const int M1Pin = 12;
/**inner definition**/
typedef struct {
  byte enPin;
  byte directionPin;
} MotorContrl;

const int M1 = 0;
const int M2 = 1;
const int MotorNum = 1;

const MotorContrl MotorPin[] = { E1Pin, M1Pin };

const int Forward = LOW;
const int Backward = HIGH;

// Servos
int const Steer_Servo = 25;
int const Ultra_servo = 26;
// Ultrasonic
int const Ultra = A9;
int fDistance;
// Light sensor
int const Red_sen = A7;
int const Blue_sen = A8;
// Button
int const Button = A6;
//Compass Variable
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
//PID
PID_v2 CompassPID(0.6, 0, 0.025, PID::Direct);
//Field config
char TURN = 'U';
long detect_line_timer;
int LineCounter = 0;
int compass_offset = 0;
int LineDetect = 0;
//Camera Variable
static int GreenBlobX = -1;
static int GreenBlobY = -1;
static int GreenBlobHeight = -1;
static int RedBlobX = -1;
static int RedBlobY = -1;
static int RedBlobHeight = -1;
char ColorChecker = 'U';  // Default value

char buffer[128];  // Buffer to hold incoming data
char *string[5];   // Array to hold token pointers
char *ptr = NULL;  // Pointer to current token
//Avoidance Variable
float YDistance;
float XDistance;
bool FoundBlock = false;
float CalculateAvoidance = 0;
char LatestBlock;

//Return Variable
float GInitialY = 0;
float GInitialX = 0;
float RInitialY = 0;
bool blockDodged = false;
bool returnvalue = false;
long dodgeTime;
int final_value;

void setup() {
  Serial.begin(19200);
  Serial3.begin(19200);
  CompassPID.Start(0, 0, 0);
  CompassPID.SetOutputLimits(-180, 180);
  CompassPID.SetSampleTime(10);
  pinMode(Steer_Servo, OUTPUT);
  pinMode(Ultra_servo, OUTPUT);
  pinMode(Ultra, INPUT);
  pinMode(Red_sen, INPUT);
  pinMode(Blue_sen, INPUT);
  pinMode(Button, INPUT);
  initMotor();
  servo1.attach(Ultra_servo, 500, 2400);
  servo2.attach(Steer_Servo, 500, 2500);
  ultra_servo(0, 'R');
  steering_servo(0);
  while (analogRead(Button) > 500)
    ;
  zeroYaw();
  while (analogRead(Button) <= 500)
    ;
}

void loop() {
  while (analogRead(Button) > 500) {
    BobDetection();
    CalculateAvoidance = Avoidance_calculation();
    if ((!blockDodged && CalculateAvoidance != 0) || (FoundBlock == true && CalculateAvoidance != 0)) {
      blockDodged = true;  // Mark the block as dodged
      final_value = CalculateAvoidance;
    }

    if ((blockDodged && CalculateAvoidance == 0) || (blockDodged && FoundBlock == false)) {
      blockDodged = false;
      returnvalue = true;
    }

    if (returnvalue == true) {
      float returncalculation = (asin(sqrt(sq(GInitialX) + sq(GInitialY)))) * -2;
      while ((getDistance() > GInitialX +3) || (getDistance() < GInitialX - 3)) {
        final_value = returncalculation;
      }
      returnvalue = false;
      GInitialY = 0;
      GInitialX = 0;
      RInitialY = 0;
      blockDodged = false;
    }
    // Serial.print(LatestBlock);
    Serial.print(" ");
    Serial.println(CalculateAvoidance);
    motor(0);
    steering_servo(final_value);
  }
  while (analogRead(Button) <= 500) {
    motor(0);
  }
  while (analogRead(Button) > 500)
    ;
  while (analogRead(Button) <= 500)
    ;
}
