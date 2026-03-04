int red = 9;
int green = 10;
int blue = 11;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  int redvalue = random(0, 256);
  int greenvalue = random(0, 256);
  int bluevalue = random(0, 256);
  analogWrite(red, redvalue);
  analogWrite(green, greenvalue);
  analogWrite(blue, bluevalue);
  delay(1000);
}
