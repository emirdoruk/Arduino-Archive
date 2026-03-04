int tripPin=9;
int echoPin=10;
int sure;
int mesafe;

void setup() {
  // put your setup code here, to run once:
pinMode (tripPin, OUTPUT);
pinMode (echoPin, INPUT);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tripPin, LOW);
delayMicroseconds (2);
digitalWrite(tripPin, HIGH);
delayMicroseconds (10);
digitalWrite(tripPin, LOW);
delayMicroseconds (2);

sure=pulseIn (echoPin, HIGH);
mesafe=(sure/2)/29.1;
Serial.print ("My distance:");
Serial.println (mesafe);
delay (500);
}
