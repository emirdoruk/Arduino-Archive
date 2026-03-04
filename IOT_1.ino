#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

char auth[] = "fKL1Yz4aeC4r5kK-SBaJwpayA5WexjkV"; //epostaya gelen kod
char ssid[] = "emirdoruk"; //wifi adı
char pass[] = "13022004emirdoruk"; //wifi şifresi

void setup() {
Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
}

void loop() {
Blynk.run();
}
