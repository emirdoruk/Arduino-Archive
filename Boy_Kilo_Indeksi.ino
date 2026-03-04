float kilo;
float boy;
float sonuc;

void setup() {
  Serial.begin (9600);
}

void loop() {
  delay(1000);
  Serial.println("kg ve m kullanın");
  delay(1000);

  Serial.print("kilo= ");
  while (Serial.available() == 0) {}
  kilo = Serial.parseFloat();
  Serial.println(kilo);
  delay(1000);

  Serial.print("boy= ");
  while (Serial.available() == 0) {}
  boy = Serial.parseFloat();
  Serial.println(boy);
  delay(1000);

  sonuc = kilo / (boy * boy);

  if (sonuc < 20) {
    Serial.print(sonuc);
    Serial.println(", düşük kilolu");
    delay(1000);
  }

  else if (sonuc > 20 and sonuc < 25) {
    Serial.print(sonuc);
    Serial.println(", normal");
    delay(1000);
  }

  else if (sonuc > 25 and sonuc < 30) {
    Serial.print(sonuc);
    Serial.println(", aşırı kilolu");
    delay(1000);
  }

  else if (sonuc > 30 and sonuc < 40) {
    Serial.print(sonuc);
    Serial.println(", obez");
    delay(1000);
  }

  else if (sonuc > 40) {
    Serial.print(sonuc);
    Serial.println(", aşırı obez");
    delay(1000);
  }

  delay(1000);
}
