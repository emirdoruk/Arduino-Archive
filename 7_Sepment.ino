int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 9;
int f = 10;
int g = 11;
void setup() {
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
}

void loop () {
  
}

void rakamYaz(int rkm){
digitalWrite (a,LOW);
digitalWrite (b,LOW);
digitalWrite (c,LOW);
digitalWrite (d,LOW);
digitalWrite (e,LOW);
digitalWrite (f,LOW);
digitalWrite (g,LOW);
switch (rkm) {
case 1: digitalWrite (b,HIGH);
        digitalWrite (c,HIGH);
        break;
case 2: digitalWrite (a,HIGH);
        digitalWrite (b,HIGH);
        digitalWrite (g,HIGH);
        digitalWrite (e,HIGH);
        break;
case 3: digitalWrite (a,HIGH);
        digitalWrite (b,HIGH);
        digitalWrite (g,HIGH);
        digitalWrite (c,HIGH);
        digitalWrite (d,HIGH);
        break;
case 4: digitalWrite (f,HIGH);
        digitalWrite (g,HIGH);
        digitalWrite (b,HIGH);
        digitalWrite (c,HIGH);
        break;
case 5: digitalWrite (a,HIGH);
        digitalWrite (f,HIGH);
        digitalWrite (g,HIGH);
        digitalWrite (c,HIGH);
        digitalWrite (d,HIGH);        
        break;
}
}
