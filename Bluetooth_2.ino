#include <SoftwareSerial.h>

char ch = ' ';

int sensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensor);
  if (Serial.available()) {
    ch = Serial.read();
    Serial.write(ch);

    if (ch == '1') {
      Serial.print("sistem açıldı");
      Serial.println("değeriniz: ");
      Serial.print(value);
    }

    else if (ch == '0') {
      Serial.println("sistem kapatıldı");
    }
  }
}
