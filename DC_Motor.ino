#include <AFMotor.h>
AF_DCMotor motor(1,MOTOR12_64KHZ);   //Motor 1-2 için MOTOR12, motor 3-4 için MOTOR34 kullanılacak.
AF_DCMotor motor2(2,MOTOR12_64KHZ);
char ch;

void setup() {
 Serial.begin(9600);
 Serial.println("Motor Test");
 motor.setSpeed(200);
 motor2.setSpeed(200);
}

void loop() {
 while ( Serial.available()){
  ch=Serial.read();
 }

 if(ch=='1'){
  motor.run(FORWARD);
  motor2.run(FORWARD);
  delay(1000);
 
 }

 else if(ch=='2'){
  motor.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(1000);
 }
}
