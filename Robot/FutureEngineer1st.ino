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


void setup() {
  Serial.begin(115200);
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
  //First Value
  fDistance = getDistance();
  while (!Serial)
    ;
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
    getIMU();
    Color_detection();
    // Serial.print("red");
    // Serial.print(analogRead(Red_sen));
    // Serial.print("blue");
    // Serial.println(analogRead(Blue_sen));
    motor(100);
    start();
    Serial.println(pvYaw);
    steering_servo(CompassPID.Run(pvYaw + ((getDistance() - 30)) * ((float(TURN == 'R') - 0.5) * 2)));
    ultra_servo(pvYaw, TURN);
    if (LineCounter >= 12) {
      long TimerLine = millis();
      while (millis() - TimerLine < 920) {
        getIMU();
        Color_detection();
        steering_servo(CompassPID.Run(pvYaw + ((getDistance() - 30)) * ((float(TURN == 'R') - 0.5) * 2)));
        ultra_servo(-pvYaw, TURN);
      }
      motor(0);
      while (true) {
      }
    }
  }

  while (analogRead(Button) <= 500) {
    motor(0);
  }
  while (analogRead(Button) > 500)
    ;
  while (analogRead(Button) <= 500)
    ;
}
