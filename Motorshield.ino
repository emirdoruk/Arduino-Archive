#include <AFMotor.h>
AF_DCMotor motor(1,MOTOR12_64KHZ);   //Motor 1-2 için MOTOR12, motor 3-4 için MOTOR34 kullanılacak.
AF_DCMotor motor2(2,MOTOR12_64KHZ);   


void setup() {
Serial.begin(9600);
Serial.println("Motor test!!");

motor.setSpeed(250);  //Terkerlik hızını belirle!!!!

motor2.setSpeed(250); 
}

void loop() {
  // put your main code here, to run repeatedly:
motor.run(FORWARD);  //tekerleğin ileri gitmesi.
motor2.run(FORWARD);  //tekerleğin ileri gitmesi.
delay(1000);
motor.run(BACKWARD);  //tekerleğin geri gitmesi.
motor2.run(BACKWARD);  //tekerleğin geri gitmesi.
delay(1000);
motor.run(RELEASE);
motor2.run(RELEASE);
delay(1000);

}
