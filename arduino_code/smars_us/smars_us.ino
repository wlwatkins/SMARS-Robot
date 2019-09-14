#include <Ultrasonic.h>
#include "AFMotor.h"

#define minDistance 5
#define delayForwards 1000
#define delayRotate 5
#define delayLoop 100

AF_DCMotor motorR(1);  // right DC Motor
AF_DCMotor motorL(4);  // left DC Motor
Ultrasonic ultrasonic(9, 10); // echo grey pin 10 ; trig white pin 9
void setup() {
  Serial.begin(9600);


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

  if (distance < minDistance){
    turnAround(delayRotate);
  }
  else
  {
    moveForwards(delayForwards);
  }

  delay(delayLoop);
}
