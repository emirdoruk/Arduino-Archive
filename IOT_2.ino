#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

char auth[] = "vdPIu6YNvR1uaSvjaEU6ObXiS-N1bhYt"; //epostaya gelen kod
char ssid[] = "Emirdoruk"; //wifi adı
char pass[] = "13022004emir"; //wifi şifresi

void setup() {
Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
}

void loop() {
Blynk.run();
}
