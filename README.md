# Documentation for WRO Future Engineer 2024
by Team *YBR-AGO*


![]([https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929](http://www2.yothinburana.ac.th/website/images/logo1.png))


<p align="center">
  <img src="https://ybrobot.club/image/YB%20Robot%20logo.png" width="400"/>
</p>
<p align="center">
<b>By Yothinburana School Robot Club</b>
</p>
<br><br><br><br>

## Our works (Youtube Links): 
Without obstacle 

With obstacle

<br>


### This Github repository contains:
# The Open-Source Machine Vision Project
  - [About our team](#About_our_team)
  - [Robot Design](#robot-design)
- About our team
- Robot Design
- Program explaination


# **Part 1: About our team.**
<p align="center">
<img src="https://github.com/Snackels/FutureEngineer2024_YBR_AGO/blob/main/Team_Photo/TeamPhoto.jpg?raw=true" width="400"/>  <img src="https://github.com/Snackels/FutureEngineer2024_YBR_AGO/blob/main/Team_Photo/funnyteampic.jpg?raw=true" width="400"/> 
</p>
<p align="center">

*YBR-AGO* comprises three students from Yothinburana School. Our team consists of two members from year 11 and one from year 10. Last year, Vichaiwat and Vorawet secured first place in Thailand national stage with team YBR-GPA4.0 while Chaiwat came in second with the team YBR-BOO. We all made it into international round as Thailand representative. Sadly, Vichaiwat and Vorawet in team called Sunflower secured 7th place and Chaiwat in Zenith secured the 8th. Now we know what we should do to prevent that from happening again and try our best to win that first place.

Here are the team members from left to right.

1. Vichaiwat Koonsap, 16 years old.

2. Chaiwat Chinsupawat, 15 years old.

3. Vorawet Narkglom, 16 years old.


## Part 2: Robot Design
### The Robot

Designing a robot for this competition is sometimes hard. We need to design it to be compact, lightweight, durable, and have all the functions we need. The robot must be four-wheeled with a steering function on either front or back wheel, which is why we need to be careful to pick the components. After we select all the components we need, then we think about how to put them all together. We came up with using Lego Technic parts. We spent a lot of time designing it to be within the size regulation. 

Designing a robot using Lego parts is also not easy since we need to think about everything. Every part we put in includes weight, which makes the robot slower. We failed a few times before coming up with the design we use now. After finishing designing, we combined it with other components to see the result. he robot's color also shouldn't be green and red since the camera can confuse it with the obstracle.

For the design, we placed the gyro around the middle-top of the robot to get the most accurate output, while the camera was positioned at the front of the gyro to detect objects quickly.

Our robot has two servos, one on the bottom front and one on the top front. The bottom front servo is used to steer the wheel. Then, we added a top servo that rotates our ultrasonic. We use an ultrasonic to keep our robot out of the wall. Finally, we place our motor at the bottom back of the robot, and to ensure that it drives both wheels at the back, we use a gear differential from Lego.

### Our robot components
  
   ### Movement Parts
   
- ## **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Motor.png" width = "400">
It's a simple motor, and we chose this motor because of its easy connection to our robot and its cost-effectiveness. This motor is small yet powerful. and it is the perfect size for our robot. The motor comes with a dedicated port for Lego. So, we modified it to make it able to connect to the board. 

### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Voltage           | 9 V      |

### Mechanical Specifications

| Specification     | Value    |
|-------------------|----------|
| Speed             | 390 rpm  |
| Maximum torque    | 40 Ncm   |

<br><br>

- ## **Servo** : GEEKSERVO 2kg 360 Degrees servo.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Servo%201.png" width = "400">
We use this servo for steering the robot and employ an ultrasonic sensor for rotation. This servo is compatible with LEGO, making it easy and convenient to build the robot by just putting studs in the hole on the side. We like how you can connect two axles to the dual outputs on this servo so you can power two wheels or gears, or mount the servo securely inside articulated limbs and other contraptions. Additionally, the gears inside these servos will 'slip' when the blocking load is too high instead of jamming, helping avoid damage to your servos and boards.

The wires are a standard servo pinout - 
-	Red - positive
-	Brown - negative
-	Yellow - data


### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Working voltage   | 3.3V~6V  |
| Rated voltage     | 4.8V     |
| Rated current     | 200mA    |
| Stall current     | 700mA    |
| Sliding current   | 450mA    |

- ## **Differential** : Technic, gear differential with inner tabs and closed center, 28 bevel teeth
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Gear_3.png" width = "400">
This part ensure that both wheels have the power from the motor, which makes the robot drive forward. This part has gear teeth on the side, which are connected to the gear we put on the motor earlier, and then we put 3 small gears inside the differential. The differential is attached to the main body using an axle from the wheel.

<br><br>

- ## **Wheel** : Lego 49.5 × 20 tire and 30 × 20 rim
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Wheel.png" width = "400">
There are a lot of wheels to select. We chose this one because of it's size. If the wheels are too small, it reduces the speed due to the lack of rotation. But if the wheels are too big, it makes the robot slower and harder to control. With the combination of the motor and the wheels, the robot can maintain the speed we can control.

<br><br>

 ### Controller
- ## **Microcontroller Board** : Arduino Mega 2560 R3
<img src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Mega.png?raw=true" width = "400">

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Microcontroller         | ATmega2560                             |
| Operating Voltage       | 5V                                     |
| Input Voltage (recommended) | 7-12V                               |
| Input Voltage (limit)   | 6-20V                                  |
| Digital I/O Pins        | 54 (15 provide PWM output)             |
| Analog Input Pins       | 16                                     |
| DC Current per I/O Pin  | 20 mA                                   |
| DC Current for 3.3V Pin | 50 mA                                   |
| Flash Memory            | 256 KB (8 KB used by bootloader)       |
| SRAM                    | 8 KB                                    |
| EEPROM                  | 4 KB                                    |
| Clock Speed             | 16 MHz                                  |
| LED_BUILTIN             | 13                                      |
| Length                  | 101.52 mm                               |
| Width                   | 53.3 mm                                 |
| Weight                  | 37 g                                    |

<br><br>

- ## **Motor Shield** : Gravity 2x2A Motor Shield for Arduino Twin
<img src = "https://github.com/LEST0808/YBR_AGO-Photos/blob/main/motorshield%20(2).png?raw=true" width = "400">

| Specification            | Value                                  |
|--------------------------|----------------------------------------|
| Motor Driven Voltage    | 4.8V to 35V                            |
| Output Current          | Up to 2A/channel                       |
| Total Power Dissipation | 25W (T=75℃)                            |
| Driven Structure        | Dual full-bridge driver                |
| Driven Power Port       | External power terminal, or VIN from Arduino |
| Driven Output Port      | 2 channel screw terminals, or male PIN headers |
| Control Port            | 4 TTL compatible digital signals (Digital 10-13) |
| Operation Temperature   | -25℃ to 130℃                           |
| Shield Size             | 56x57mm (2.20x2.24")                   |

<br><br>

- ## **Sensor Shield** : Gravity IO Sensor Shield For Arduino Mega Due
<img src = "https://github.com/LEST0808/YBR_AGO-Photos/blob/main/Sensor%20shield.png" width = "400">

| Specification                               | Value                                         |
|---------------------------------------------|-----------------------------------------------|
| Compatibility                               | Most Arduino shields                         |
| Compatible Boards                           | Arduino Mega boards, DFRobot megaADK, Arduino megaADK |
| Extended TTL Connection Pins                | Four Serial ports                            |
| Prototyping Area                            | DIP prototyping area for additional modules or components |
| Xbee Slots                                  | 3                                             |
| microSD Slot                                | 1                                             |
| Power Switch                                | Between Arduino Mega or external power       |
| Size                                        | 125 x 57 mm (4.92 x 2.24")                   |

<br><br>

### Power Management And Inspection
- ## **Camera** : OpenMV Cam H7 R1
<image src="https://github.com/LEST0808/YBR_AGO-Photos/blob/main/OpenMV.png" width = "400">

#### STM32H743VI Specifications

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **Processor**             | STM32H743VI ARM Cortex M7                       |
| **Clock Speed**           | 480 MHz                                         |
| **SRAM**                  | 1 MB                                             |
| **Flash Memory**          | 2 MB                                             |
| **I/O Voltage**           | 3.3V (5V tolerant)                              |
| **Number of I/O Pins**    | 10                                              |

#### Interfaces

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **USB**                   | Full-speed USB (12 Mbps) interface             |
| **μSD Card Socket**       | Capable of 100 Mbps read/write                  |
| **SPI Bus**               | Up to 80 Mbps                                  |
| **I2C Bus**               | Up to 1 Mbps                                   |
| **CAN Bus**               | Up to 1 Mbps                                   |
| **Asynchronous Serial Bus** | Up to 7.5 Mbps                                |

#### Analog

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **ADC**                   | 12-bit                                          |
| **DAC**                   | 12-bit                                          |

#### Control

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **Servo Control Pins**    | 3 I/O pins                                      |
| **Interrupts and PWM**    | Available on all I/O pins                      |

#### LEDs

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **RGB LED**               | Yes                                             |
| **High Power IR LEDs**    | Two 850nm                                      |

#### Camera Module

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **Default Sensor**        | OV7725                                          |
| **Resolution**            | 640x480                                         |
| **Modes**                 | 8-bit Grayscale at 75 FPS, 16-bit RGB565 (75 FPS above 320x240, 150 FPS below 320x240) |
| **Lens**                  | 2.8mm, M12 mount                                |
| **Additional Modules**    | Global Shutter Camera, FLIR Lepton Adapter     |

#### Power

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| **Battery Connector**     | Compatible with 3.7V LiPo batteries             |


  <br><br>

- ## **Ultra sonic sensor** : Gravity URM 09 ultrasonic distance sensor.
<image src="https://github.com/LEST0808/POP32ph/blob/main/117270007.png" width = "400">

### Electrical Specifications

| Specification                   | Value                  |
|---------------------------------|------------------------|
| Supply Voltage                  | 3.3~5.5V DC            |
| Operating Current               | 20mA                   |

### Performance Specifications

| Specification                   | Value                  |
|---------------------------------|------------------------|
| Operating Temperature Range      | -10°C to +70°C          |
| Measurement Range                | 2cm to 500cm (can be set) |
| Resolution                       | 1cm                    |
| Accuracy                         | 1%                     |
| Frequency                        | 50Hz Max               |

<br><br>

- ## **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Bat.png" width = "400">

### Specification

| Specification                   | Value                                        |
|---------------------------------|----------------------------------------------|
| 2 cells Voltage                  | 7.4V                                         |
| Capacity                         | 1100mAh 30C                                  |
| Charging Current                 | Up to 5 times the capacity (5C)             |
| Connectors                       | JST type, easily disconnectable              |

<br><br>

- ## **Light Sensor** : Virus III by Design By Sopon
<image src = "https://github.com/LEST0808/POP32ph/blob/main/Virus.png" width = "400">
<br><br>

- ## **GyroCompass** :GY-25

<image src = "https://github.com/LEST0808/POP32ph/blob/main/gy25-tilt-sngle-sensor-oky3254.png" width = "400">

### Specification

#### Power and Communication

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| Power supply              | 3-5V (internal low dropout regulator)          |
| Used Chip                 | MCU+MPU6050                                     |
| Communication mode        | Serial communication (baud 9600, 115200), IIC communication |
| Operating Current         | 15 mA                                          |

#### Angular Measurement

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| Angular Resolution        | 0.01°                                           |
| Direct Data               | YAW ROLL PITCH                                 |
| Measuring range of axes   | -180 to +180 degrees                           |
| Resolution                | 0.01 degrees                                  |
| Frequency Response        | 100Hz (115200bps)                              |
| Operating Temperature     | -20 to 85°C                                    |

<br><br>

- ## **Touch Sensor** : ZX-Switch01 by INEX
<img src = "https://github.com/LEST0808/AGO-Photos/blob/main/ZX%20switch.png?raw=true" width = "400">

<br><br>

- ## **Step-down** : HW-360 V6.0
<img src = "https://github.com/LEST0808/POP32ph/blob/main/Stepdown.png" width = "400">

### Specification

#### Input

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Input voltage           | DC 4.0 ~ 38V                           |

#### Output

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Output voltage          | DC 1.25V ~ 36V continuously adjustable |
| Output current          | Max 5A                                 |
| Output power            | Up to 75W                              |

#### Measurements

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Voltmeter error         | ± 0.05V                               |
| Measure range           | 0 ~ 40V                               |

#### Performance

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Conversion efficiency   | Up to 96%                              |
| Load regulation         | S (I) ≤ 0.8%                           |
| Voltage Regulation      | S (u) ≤ 0.8%                           |

<br><br>

 # **Part 3: Program explanation**

We have developed two programs for our upcoming competition. Each program is designed for a different round - the qualification round and the final round. The first program includes two subprograms that are also included in the program for the final round. Each subprogram is made up of a main program and a function. 

### First Section [qualification round]
```c++
#include "Mapf.h"
#include <Servo.h>
#include <PID_v2.h>
```
In our program, we begin by including several libraries. One such library is Mapf.h, which extends the Arduino map() function and provides floating point reading from function mapf() and changes any ADC resolution input reading to any voltage output with mapf_ADC(). Another library we include is servo.h, which enables our controller boards to control a variety of servo motors. This library is capable of controlling a great number of servos. Additionally, we use PID_v2.h, which is a PID controller that seeks to keep some input variable close to a desired setpoint by adjusting an output. The way in which it does this can be 'tuned' by adjusting three parameters (P, I, D).

### Second Section [qualification round]
```c++
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
```
This section declares the ports for each component. We start by setting the control port for the motor. Next, we create a structure that controls the motor and its associated pins. After that, we declare the servo ports for both the steering and ultrasonic servos. Then, we specify the pins for the ultrasonic sensor, light sensors, and button sensor.

Following that, we declare variables for the compass: `pvYaw, pvRoll, and pvPitch` to store compass data. `rxCnt` is a counter for receiving data, and `rxBuf` is a buffer (array) for storing the received data.

Finally, this part of the code uses the PID_v2 library to help the robot drive straight by employing PID (Proportional-Integral-Derivative) control to correct for oversteering. The last section defines the field configuration, which will be used later in the program.

### Third Section [qualification round]
```c++
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
```
This section corresponds to the "Void Setup" part of our program. In the first line is `Serial.begin(115200);`, this function is a standard instruction in Arduino programming. It initializes serial communication between the Arduino board and a connected computer or another device.

Then, we initialize the PID (Proportional-Integral-Derivative) controller that we set up in an earlier section.

The next step is to use the SetOutputLimit function, which allows us to define the compass's limits. Typically, a compass can rotate 360 degrees. However, we modify this range to -180 to 180 degrees, making it easier to control.

Following that, we use the SetSampleTime function to specify how frequently the PID controller will perform its calculations and apply control actions. In our code, we've configured it to run every 10 units of time.

The subsequent lines involve using the pinMode function, which is a fundamental part of Arduino programming. It's used to configure the behavior of specific pins on an Arduino board. In our case, we set the servos as output, the ultrasonic sensor, light sensors, and button sensor as input.

`fDistance` is a short for first distance. We put it in void setup to measure the distance between the ultrasonic and the wall at the start of the program. And we use that data to add it into a function called `getDistance`.

Next line `while (!Serial);` is used to waits for the Serial communication to be established. It loops until the Serial interface is ready.

The `servo.attach` is a command that attach the servo number to the pin. And the numbers specifies the minimum and maximum pulse widths or the servo. This sets up the servo to respond to commands within this range.

The "steering" and "ultra servo" parts are set to 0 because, at the program's start, we need the servos to be in their initial positions before any movement. But the difference is "ultra servo" has letter "R" inside which indicate the side where we want the servo to turn at the start.

As for `analogRead(Button)`, it corresponds to our button. When the value obtained from analogRead(3) is greater than 500, it indicates that the button has been pressed. In response, the compass is set to a zero yaw position. If the button is not pressed, the robot remains in its current state without making any adjustments.

### Fourth Section [qualification round]
```c++
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
    //Serial.println(pvYaw);
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
```
In this section, we start with a button press. When the button is pressed, the robot retrieves data from the IMU (Inertial Measurement Unit) through the function `getIMU`. Subsequently, the robot begins line detection using the `Color_detection` function. 

After that, we set the speed of the robot to be 100. Next line is a function called start. It is used to handle the adjustment of the robot’s steering and ultrasonic sensor based on its current state and sensor readings, provided LineDetect is not 1. 

Now, the main program we also use a function called `steering servo`. Inside that function it contains a formula of how we walk. Here is a quick break down, we start off with `Compass.PID.Run`. This code was a part of the library PID.v2 that applied a PID formula into compass. Then inside the bracket it contains the addition of variable `pvYaw` and a function called `getDistance` minus by the distance away from the wall. And outside that bracket we multiply it by another bracket that contain `float(Turn == 'R') - 0.5)*2);`. Turn is a variable we declared at the beginning and R is a variable which indicate the side in this case, its right. If `(Turn == 'R')` is equal to 1, then we subtract it with 0.5 and then multiply with 2. The result will be 1 that mean the robot need to turn right. But in another case it isnt turn right. Then the `(Turn == 'R')` would equal to 0. When we subtract with 0.5 and multiply with 2, the result will be -1. Meaning if the robot turn right the value will be 1 and if turn left it will be -1. In summary, this line of code adjusts the steering of the robot using a PID controller to maintain within direction, factoring in both the distance measurement and the direction of turning.

On this line is another function called `ultra_servo` which use `pvYaw` and `TURN` to control which direction the servo is turning toward. After that then there's a logic "if". Inside if theres a function called `line detection` which is for detecting red and blue line on race track by using light sensors. So if the robot detect equal or more than 12 lines that mean the robot has completed 3 laps around the track and is about to end it's program. Next line we declared a variable called `TimerLine` equals to millisec. And while millisec minus with `TimerLine` is less than 920. Then we get the IMU value and use a `Color_detection` function. Also we used the same servo formula as before to keep the robot straight into the stop position without crashing into walls. Then we end the program with motor speed to 0. 

Additionally we added another line of code to stop the robot program by pressing button to stop the motor from running. And to keep it running again you must reset your robot.
