int age = 0;
String name1;
float height;

void setup() {
  Serial.begin (9600);
}

void loop() {
  Serial.println("Please Enter Your Name");
  while (Serial.available() == 0) {}
  name1 = Serial.readString();

  Serial.println("Please Enter Your Age");
  while (Serial.available() == 0) {}
  age = Serial.parseInt();

  Serial.println("Please Enter Your Height");
  while (Serial.available() == 0) {}
  height = Serial.parseFloat();
  delay(1000);

  Serial.print("Your Name: ");
  Serial.println(name1);
  Serial.print("Your Age: ");
  Serial.println(age);
  Serial.print("Your Height: ");
  Serial.println(height);
  delay(1000);
}
