const int sensorout = 0;
const int led = 13;
int micvalue;
const int ledvalue = 800;

void setup() {
  pinMode (led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  micvalue = analogRead(sensorout);

  if (micvalue > ledvalue) {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
  }

  else {
    digitalWrite(led, LOW);
  }
}
