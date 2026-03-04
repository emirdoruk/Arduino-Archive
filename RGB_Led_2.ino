int red = 9;
int green = 10;
int blue = 11;
int potred = A1;
int potgreen = A2;
int potblue = A3;
int potredvalue = 0;
int potgreenvalue = 0;
int potbluevalue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  potredvalue = analogRead(potred);
  potgreenvalue = analogRead(potgreen);
  potbluevalue = analogRead(potblue);
  analogWrite(red, potredvalue);
  analogWrite(green, potgreenvalue);
  analogWrite(blue, potbluevalue);
}
