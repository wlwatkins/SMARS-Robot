// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!
#include <Ultrasonic.h>
#include "AFMotor.h"

AF_DCMotor motorR(1);  // right
AF_DCMotor motorL(4);  // left
Ultrasonic ultrasonic(9, 10); // echo gris 10 ; trig white 9
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motorR.setSpeed(200);
  motorL.setSpeed(200);
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}

void moveForwards(int timeDelay){
  uint8_t i;
  motorR.run(FORWARD);
  motorL.run(FORWARD);
  for (i=0; i<255; i++) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(2);
  }

  delay(timeDelay);

  for (i=255; i!=0; i--) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(2);
  }
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}

void turnAround(int timeDelay) {
  uint8_t i;
  motorR.run(FORWARD);
  motorL.run(BACKWARD);
  for (i=0; i<255; i++) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(10);
  }
  delay(timeDelay);
  for (i=255; i!=0; i--) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(10);
  }
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}


void loop() {
  uint8_t distance;
  distance = ultrasonic.read(CM);

  if (distance < 5){
    turnAround(5);
  }
  else
  {
    moveForwards(1000);
  }

  delay(500);
}
