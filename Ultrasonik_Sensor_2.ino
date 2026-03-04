int tripPin=3;
int echoPin=5;
int sure;
int mesafe;
int ledPin1=6;
int ledPin2=9;
int ledPin3=10;
int ledPin4=11;
int buzzer=13;
void setup() {
  // put your setup code here, to run once:
pinMode (tripPin, OUTPUT);
pinMode (echoPin, INPUT);
Serial.begin (9600);
pinMode (ledPin1, OUTPUT);
pinMode (ledPin2, OUTPUT);
pinMode (ledPin3, OUTPUT);
pinMode (ledPin4, OUTPUT);
pinMode (buzzer, OUTPUT);
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

if (mesafe>75) { 
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3,LOW);
digitalWrite(ledPin4, LOW);
digitalWrite (buzzer, LOW);
}
else if (mesafe>50 and mesafe<75) { 
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite (buzzer, HIGH);
delay(1000);
digitalWrite (buzzer, LOW);
delay(1000);
}
else if (mesafe>25 and mesafe<50) { 
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, HIGH);
digitalWrite(ledPin4, LOW);
digitalWrite (buzzer, HIGH);
delay(500);
digitalWrite (buzzer, LOW);
delay(500);
}
else if (mesafe<25) { 
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, HIGH);
digitalWrite(ledPin4, HIGH);
digitalWrite (buzzer, HIGH);
delay(100);
digitalWrite (buzzer, LOW);
delay(100);
}

}
