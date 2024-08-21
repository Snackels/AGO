//motor
void setMotorDirection(int motorNumber, int direction) {
  digitalWrite(MotorPin[motorNumber].directionPin, direction);
}
//motor
inline void setMotorSpeed(int motorNumber, int speed) {
  analogWrite(MotorPin[motorNumber].enPin, 255.0 * (speed / 100.0));  //PWM
}
// motor
void motor(int speed) {
  if (speed > 0) {
    setMotorDirection(M1, Forward);
    setMotorSpeed(M1, speed);
  } else {
    setMotorDirection(M1, Backward);
    setMotorSpeed(M1, speed * -1);
  }
}
// motor
void initMotor() {
  int i;
  for (i = 0; i < MotorNum; i++) {
    digitalWrite(MotorPin[i].enPin, LOW);

    pinMode(MotorPin[i].enPin, OUTPUT);
    pinMode(MotorPin[i].directionPin, OUTPUT);
  }
}
//WrapValue
int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}
//Compass
void zeroYaw() {
  Serial1.begin(115200);
  delay(100);
  // Sets data rate to 115200 bps
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X54);
  delay(100);
  // pitch correction roll angle
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X55);
  delay(100);
  // zero degree heading
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X52);
  delay(100);
  // automatic mode
}
//IMU Compass
bool getIMU() {
  while (Serial1.available()) {
    rxBuf[rxCnt] = Serial1.read();
    if (rxCnt == 0 && rxBuf[0] != 0xAA) return;
    rxCnt++;
    if (rxCnt == 8) {  // package is complete
      rxCnt = 0;
      if (rxBuf[0] == 0xAA && rxBuf[7] == 0x55) {  // data package is correct
        pvYaw = (int16_t)(rxBuf[1] << 8 | rxBuf[2]) / 100.f;
        pvPitch = (int16_t)(rxBuf[3] << 8 | rxBuf[4]) / 100.f;
        pvRoll = (int16_t)(rxBuf[5] << 8 | rxBuf[6]) / 100.f;
        pvYaw = wrapValue(pvYaw + compass_offset, -179, 180);
        return true;
      }
    }
  }
  return false;
}

//steering
void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 142;
  } else if (mode_steer == 'R' || mode_steer == 'U') {
    middle_degree = 70;  //45
  } else if (mode_steer == 'L') {
    middle_degree = 210;
  } else {
  }
  servo1.write(mapf(max(min(middle_degree + degree, 225), 45), 0, 270, 0, 180));
}
//steering
void steering_servo(int degree) {
  servo2.write((90 + max(min(degree, 48), -48)) / 2);
}
//ultrasonic
float getDistance() {
  return min(mapf(analogRead(Ultra), 0, 1023, 0, 500), 50);
}

//Light
void Color_detection() {
  int blue_value = analogRead(Blue_sen);
  if (TURN == 'U') {
    int red_value = analogRead(Red_sen);
    if (blue_value < 679 || red_value < 329) {
      int lowest_red = red_value;
      long color_window = millis();
      while (millis() - color_window < 100) {
        int red_value = analogRead(Red_sen);
        if (red_value < lowest_red) {
          lowest_red = red_value;
        }
      }
      if (lowest_red > 329) {
        TURN = 'L';
        compass_offset += 90;
      } else {
        TURN = 'R';
        compass_offset -= 90;
      }
      detect_line_timer = millis();
      LineCounter++;
      LineDetect = 1;
    }
  } else {
    if (millis() - detect_line_timer > 1300) {
      if (blue_value < 679) {
        if (TURN == 'R') {
          compass_offset -= 90;
        } else {
          compass_offset += 90;
        }
        detect_line_timer = millis();
        LineCounter++;
        LineDetect = 1;
      }
    }
  }
}

//start
void start() {
  Serial.println(LineDetect);
  if (LineDetect != 1) {
    steering_servo(CompassPID.Run(pvYaw + ((getDistance() - fDistance))));
    ultra_servo(pvYaw, TURN);
  } 
}
