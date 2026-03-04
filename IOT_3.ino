#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

int sensorvalue;

char auth[] = "6FZdDRoKsXRHwBR2pEChQsqcfm0VrRmM"; //epostaya gelen kod
char ssid[] = "Emirdoruk"; //wifi adı
char pass[] = "13022004emir"; //wifi şifresi

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

BLYNK_READ(V3) {
  sensorvalue = analogRead(A0);
  Blynk.virtualWrite(V3, sensorvalue);
}

void loop() {
  Blynk.run();
}
