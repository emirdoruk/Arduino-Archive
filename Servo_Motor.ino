#include <Servo.h>
Servo myServo;
int servoPin=9;
void setup() {
myServo.attach(servoPin);
myServo.write(0);
}

void loop() {
myServo.write(0);
delay(500);
myServo.write(180);
delay(500);
}
