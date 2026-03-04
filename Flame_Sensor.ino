
int flamePin = A1;
int flameValue;

int buzzerPin =5;
int a = 3;
int b = 4;
int c = 8;
int e = 7;
int d = 9;
int g = 2;
int f = 6;

void setup() {
pinMode(flamePin,INPUT);
Serial.begin(9600);  // put your setup code here, to run once:

pinMode(buzzerPin,OUTPUT);
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
Serial.print("My Flame Volue");
Serial.println(flameValue);
delay(500);
if(flameValue<100){
  digitalWrite(buzzerPin,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);  
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
else if(flameValue>100){
  digitalWrite(buzzerPin,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);  
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  }
}
// put your main code here, to run repeatedly:
