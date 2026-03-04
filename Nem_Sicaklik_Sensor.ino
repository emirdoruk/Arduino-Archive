#include <dht.h>
dht myDHT;

#define dhtPin A0
int nemDegeri;
int sicaklikDegeri;

void setup() {
Serial.begin(9600);
}

void loop() {
int dHt=myDHT.read11(dhtPin);
nemDegeri=myDHT.humidity;
sicaklikDegeri=myDHT.temperature;
Serial.print("nem degeri:");
Serial.println(nemDegeri);
Serial.print("sicaklik degeri:");
Serial.println(sicaklikDegeri);
delay(500);

}
