int buton = 8;
int butonValve;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int rastgele;
void setup() {
  pinMode (buton , INPUT);
  Serial.begin (9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  butonValve = digitalRead(buton);
  Serial.print ("buton degerim");
  Serial.println(butonValve);
  delay(500);
  if (butonValve == 1) {
    rastgele = random(1, 4);
  
   if(rastgele==1){
   
   digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}
else if (rastgele == 2) {
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
}
else {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);


}}}
