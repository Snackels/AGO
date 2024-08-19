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
- About our team
- Robot Design
- Program explaination


# **Part 1: About our team.**
<p align="center">
<img src="https://github.com/Snackels/FutureEngineer2024_YBR_AGO/blob/main/Team_Photo/TeamPhoto.jpg?raw=true" width="400"/>  <img src="https://github.com/Snackels/FutureEngineer2024_YBR_AGO/blob/main/Team_Photo/funnyteampic.jpg?raw=true" width="400"/> 
</p>
<p align="center">

*YBR-AGO* comprises three students from Yothinburana School. Our team consists of two members from year 11 and one from year 10. Last year, Vichaiwat and Vorawet secured first place in Thailand national stage with team YBR-GPA4.0 while Chaiwat came in second with the team YBR-BOO.

Here are the team members from left to right.

1. Vichaiwat Koonsap, 16 years old.

2. Chaiwat Chinsupawat, 15 years old.

3. Vorawet Narkglom, 16 years old.


# **Part 2: Robot Design.**
### The Robot

Designing a robot for this competition is sometime hard. We need to design it to be compact, lightweight, durable, and have all the functions we need. The robot must be four-wheeled with a steering function on either front or back wheel, which is why we need to be careful to pick the components. After we select all the components we need, then we think about how to put them all together. We came up with two choices. The first is with Lego Technic parts, but due to its size and weigh,which must be 300x200mm and 300mm in height, that makes it hard to design a compact robot. So we decided to use a 3D-printed robot for more lightweight, and we can also put the component anywhere we want with just designing. 

3D printing is also not easy since we need to be precise; every hole and component size must fit into places we want. We failed a few times before coming up with the design we use now. After finishing designing, we printed it out to see the result with our own 3D printer and using ABS filaments. The robot color also shouldn't be green and red since the camera can be confused with the obstracle.

For the design, we placed the gyro around the middle-top of the robot to get the most accurate output, while the camera was positioned at the front of the gyro to detect objects quickly.

 Our robot has two servos, one on the bottom front and one on the top front. The bottom front servo is used to steer the wheel. Then, we added a top servo that rotates our ultrasonic. We use an ultrasonic to keep our robot out of the wall. Finally, we place our motor at the bottom back of the robot, and to ensure that it drives both wheels at the back, we use a gear differential from Lego.

### Our robot components
   ### Robot body
   
- ## **3D Printer** : Bambu Lab X1-Carbon 3D Printer.
<image src="https://store.bambulab.com/cdn/shop/files/X1CC_07f4cfd7-8e58-464f-8851-ae6b34ef6c66_400x.png?v=1720164375" width = "400">

### General Specifications

| Specification         | Value                             |
|-----------------------|-----------------------------------|
| Build Volume          | 256 × 256 × 256 mm³*              |
| Nozzle                | 0.4 mm Hardened Steel Included     |
| Hotend                | All-Metal                          |
| Max Hot End Temperature | 300 ℃                           |
| Filament Diameter     | 1.75 mm                            |
| Supported Filament    | PLA, PETG, TPU, ABS, ASA, PVA, PET |
| Ideal for             | PA, PC, Carbon/Glass Fiber Reinforced Polymer |

### Build Plate Specifications

| Specification               | Value                           |
|-----------------------------|---------------------------------|
| Build Plate Surface         | Bambu Textured PEI Plate or Bambu Cool Plate (Pre-installed, Random, Both compatible with Micro Lidar) |
| Max Build Plate Temperature | 110℃@220V, 120℃@110V            |

### Tool Head Specifications

| Specification               | Value      |
|-----------------------------|------------|
| Max Speed                   | 500 mm/s    |
| Max Acceleration            | 20 m/s²     |

### Physical Dimensions

| Specification               | Value            |
|-----------------------------|------------------|
| X1C Dimensions              | 389 × 389 × 457 mm³ |
| Package Size (X1C)          | 480 × 480 × 535 mm³ |
| Net Weight (X1C)            | 14.13 kg         |
| Gross Weight (X1C)          | 18 kg            |
| Package Size (X1C Combo)    | 480 × 480 × 590 mm³ |
| Gross Weight (X1C Combo, AMS included) | 22.3 kg |

### Electrical Requirements

| Specification   | Value             |
|-----------------|-------------------|
| Voltage         | 100-240 VAC       |
| Frequency       | 50/60 Hz          |
| Power Consumption | 1000W@220V, 350W@110V |

<br><br>

- ## **Filament** : Acrylonitrile Butadiene Styrene or simply known as *ABS*
<image src="https://inwfile.com/s-ds/lzfjpv.png" width = "400">
  
<br><br>

   ### Movement Parts
   
- ## **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Motor.png" width = "400">

### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Voltage           | 9 V      |

### Mechanical Specifications

| Specification     | Value    |
|-------------------|----------|
| Speed             | 380 rpm  |
| Maximum torque    | 40 Ncm   |

<br><br>

- ## **Servo** : GEEKSERVO 2kg 360 Degrees servo.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Servo%201.png" width = "400">

### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Working voltage   | 3.3V~6V  |
| Rated voltage     | 4.8V     |
| Rated current     | 200mA    |
| Stall current     | 700mA    |
| Sliding current   | 450mA    |

- ## **Gearbox** : Technic, gear differential with inner tabs and closed center, 28 bevel teeth
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Gear_3.png" width = "400">

<br><br>

- ## **Wheel** : Lego 49.5 × 20 tire and 30 × 20 rim
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Wheel.png" width = "400">

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

 
