int butonPin =9;
int butonDeger;
int led1 = 6;
int led2 = 5;
int led3 = 10;
int rastgele;
void setup() {
  Serial.begin(9600);
  pinMode(butonPin,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  butonDeger=digitalRead(butonPin);
  Serial.println(butonDeger);
  if(butonDeger==1){
  rastgele=random(1,4);
  if(rastgele==1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
   if(rastgele==2){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
   if(rastgele==3){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
  }
   }
else if(butonDeger==0){
  digitalWrite (led1, LOW);
   digitalWrite (led2, LOW);
 digitalWrite (led3, LOW);
 }
 delay(500);
}
