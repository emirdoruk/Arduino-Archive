// A0 a buzzer ekle
#include <Keypad.h>
#include <Servo.h>
#include <LiquidCrystal.h>
#include <Wire.h>

int ledPin1 = 2; // yeşil pin, açmak için
int ledPin2 = 3; // kırmızı pin, kapamak için
int buzzer = A0;

Servo myservo;

int control = 0;
int counter = 0;
const byte satir = 4;
const byte sutun = 4;
String enter_password;
String password = "#1302"; // kendimizin belirlediği şifre
char keymap[4][4]= { {'1','2','3','A'} , {'4','5','6','B'} , {'7','8','9','C'} , {'*','0','#','D'} }
byte satir_pinleri[4]={13,12,11,10};
byte sutun_pinleri[4]={9,8,7,6};
Keypad myKeypad=Keypad(makeKeymap(keymap) , satir_pinleri , sutun_pinleri , 4 , 4);

void setup() {
Serial.begin(9600);
pinMode(A0, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
lcd.init();
lcd.backlight();
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Sifreyi Girin");
delay(1000);
lcd.clear;
myservo.attach(5);
myservo.write(0);

}

void loop(){
  char sayi = myKeypad.getKey();  // keypadden gelen değer
  if (sayi != NO_KEY) {
    Serial.print(sayi);
    
    if(sayi == '#') {  // # tuşuna basıldı ise control 1 olur password kontrole geçer
      control = 1;
    }
    
    if(sayi == 'A') { // Kapıyı Kapat
        myservo.write(0);
        digitalWrite(ledPin1,LOW); 
        digitalWrite(ledPin2,LOW); 
     }
     
    
    if(control == 1){ // # tuşuna basıldı ise gerekli kontrolleri yap
      enter_password = enter_password + sayi;
      counter++;
      Serial.print("sifre " + enter_password );
      
        if(enter_password == password) { // password doğru ise
          lcd.print("kapı açıldı");
          myservo.write(180);
          digitalWrite(ledPin1,1); 
          digitalWrite(ledPin2,0);
          delay(2000);
          digitalWrite(ledPin1,0); 
          lcd.clear;
          enter_password = "";
          control = 0;
          counter = 0;
          }
          
          else if ((enter_password != password) && (counter > 4) ) { // password yanlış veya 4 den fazla girildi ise
          lcd.print("hatalı giriş");
          myservomotor.write(0);
          digitalWrite(ledPin1,0); 
          digitalWrite(ledPin2,1);
          delay(2000);
          digitalWrite(ledPin2,0);
          lcd.clear;
          enter_password = "";
          control = 0;
          counter = 0;
          }
     }
  }
}
