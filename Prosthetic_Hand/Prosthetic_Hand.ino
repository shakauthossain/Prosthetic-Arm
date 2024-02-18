#include <Servo.h>

Servo thumbServo;
Servo indexServo;
Servo littleServo;

const int forceSensorPin = A0;

int forceValue;

void setup() {
  thumbServo.attach(2);
  indexServo.attach(4);
  littleServo.attach(6);

  Serial.begin(9600);
}

void loop() {
  forceValue = analogRead(forceSensorPin);

  int thumbAngle = map(forceValue, 0, 1023, 0, 90);
  int indexAngle = map(forceValue, 0, 1023, 0, 120);
  int littleAngle = map(forceValue, 0, 1023, 0, 70);

  thumbServo.write(thumbAngle);
  indexServo.write(indexAngle);
  littleServo.write(littleAngle);

  Serial.print("Force Value: ");
  Serial.println(forceValue); //For Debugging

  delay(100);
}
