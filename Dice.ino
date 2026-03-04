int number_d4;
int number_d6;
int number_d8;
int number_d10;
int number_d12;
int number_d20;

int button_d4 = 2;
int button_d6 = 3;
int button_d8 = 4;
int button_d10 = 5;
int button_d12 = 6;
int button_d20 = 7;

int button_d4value = 0;
int button_d6value = 0;
int button_d8value = 0;
int button_d10value = 0;
int button_d12value = 0;
int button_d20value = 0;

int result;

void setup() {
  pinMode(button_d4, INPUT);
  pinMode(button_d6, INPUT);
  pinMode(button_d8, INPUT);
  pinMode(button_d10, INPUT);
  pinMode(button_d12, INPUT);
  pinMode(button_d20, INPUT);

  Serial.begin(9600);
}

void loop() {
  button_d4value = digitalRead(button_d4);
  if (button_d4value == 1) {
    number_d4 = random(1, 5);
    Serial.println(number_d4);
    delay(1000);
  }

  button_d6value = digitalRead(button_d6);
  if (button_d6value == 1) {
    number_d6 = random(1, 7);
    Serial.println(number_d6);
    delay(1000);
  }

  button_d8value = digitalRead(button_d8);
  if (button_d8value == 1) {
    number_d8 = random(1, 9);
    Serial.println(number_d8);
    delay(1000);
  }

  button_d10value = digitalRead(button_d10);
  if (button_d10value == 1) {
    number_d10 = random(1, 11);
    Serial.println(number_d10);
    delay(1000);
  }

  button_d12value = digitalRead(button_d12);
  if (button_d12value == 1) {
    number_d12 = random(1, 13);
    Serial.println(number_d12);
    delay(1000);
  }

  button_d20value = digitalRead(button_d20);
  if (button_d20value == 1) {
    number_d20 = random(1, 21);
    Serial.println(number_d20);
    delay(1000);
  }
}
