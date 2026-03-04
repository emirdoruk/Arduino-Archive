int waterPin= A5;
int waterVolve;


void setup() {
  Serial.begin(9600); 
  // put your setup code here, to run once:

}

void loop() {
  waterVolve=analogRead(waterPin);
  Serial.print("MyWaterVolve:");
  Serial.println (waterVolve);
  delay (500);
  
  // put your main code here, to run repeatedly:

}
