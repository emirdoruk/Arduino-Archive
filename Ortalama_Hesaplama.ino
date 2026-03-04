float note1;
float note2;
float note3;
float result;

void setup() {
  Serial.begin (9600);
}

void loop() { 
  delay(1000);
  Serial.println("not1= ");
  while (Serial.available() == 0) {}
  note1 = Serial.parseFloat();
  delay(1000);
  
  Serial.println("not2= ");
  while (Serial.available() == 0) {}
  note2 = Serial.parseFloat();
  delay(1000);
  
  Serial.println("not3= ");
  while (Serial.available() == 0) {}
  note3 = Serial.parseFloat();
  delay(1000);
  
  result = (note1 + note2 + note3) / 3;
  
  if (result > 50) {
    Serial.print(result);
    Serial.println("Gectiniz");
    delay(1000);
  }
  
  else {
    Serial.print(result);
    Serial.println("Kaldiniz");
    delay(1000);
  }
  
  delay(1000);
}
