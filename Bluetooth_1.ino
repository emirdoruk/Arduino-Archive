#include <SoftwareSerial.h>

char ch = ' ';

int led1 = 8;
int led2 = 9;
int led3 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    ch = Serial.read();
    Serial.write(ch);

    if (ch == '0') {
      digitalWrite(led1, LOW);
    }

    else if (ch == '1') {
      digitalWrite(led1, HIGH);
    }

     if (ch == '2') {
      digitalWrite(led2, LOW);
    }

    else if (ch == '3') {
      digitalWrite(led2, HIGH);
    }

     if (ch == '4') {
      digitalWrite(led3, LOW);
    }

    else if (ch == '5') {
      digitalWrite(led3, HIGH);
    }
  }
}
