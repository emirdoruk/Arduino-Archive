int gasPin=A0;
int gasValue;

void setup() {
Serial.begin(9600);

}

void loop() {
gasValue=analogRead(gasPin);
Serial.print("my gas value");
Serial.println(gasValue);
delay (500);
}
