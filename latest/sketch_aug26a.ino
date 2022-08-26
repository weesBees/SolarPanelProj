#include <Servo.h> //includes the servo library

Servo servo1;
Servo servo2;
void setup() {
  // put your setup code here, to run once:
servo1.attach(8);
servo2.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
servo1.write(100);
servo2.write(0);
}
