int flamePin = A1;
int buzzerPin=8;
int flameValue;
int redPin = 9;
int greenPin = 10;
int g=4;
int f=5;
int a=6;
int b=7;
int e=9;
int d=10;
int c=11;

void setup() {
pinMode (buzzerPin,OUTPUT);
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  flameValue = analogRead(flamePin);
  Serial.print("MyflameValue");
  Serial.println(flameValue);
  delay(500);

digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
if (flameValue < 100)
{
 digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
  digitalWrite(buzzerPin,HIGH);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
}
else if (flameValue > 100)
{
  digitalWrite(buzzerPin,LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
}
}
