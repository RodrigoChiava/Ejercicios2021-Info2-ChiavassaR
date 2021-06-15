#include <Arduino.h>
int cont=0;

void setup() {
  DDRD=DDRD|B11111100;
  DDRB=DDRB|B00000011;
  PORTD=B00000000;
  PORTB=B00000000;
}

void loop() {
  delay(500);
  cont++;
  if(cont==9){
    cont=1;
    seteo();
  }
  digito(cont);
}

void seteo(){
  PORTD=B00000000;
  PORTB=B00000000;
}

void a(){
  seteo();
  PORTD=B00000100;
}

void b(){
  seteo();
  PORTD=B00001000;
}

void c(){
  seteo();
  PORTD=B00010000;
}

void d(){
  seteo();
  PORTD=B00100000;
}

void e(){
  seteo();
  PORTD=B01000000;
}

void f(){
  seteo();
  PORTD=B10000000;
}

void g(){
  seteo();
  PORTB=B00000001;
}

void dp(){
  seteo();
  PORTB=B00000010;
}

void digito(int cont){
  if(cont<9){
    switch(cont){
      case 1: a();break;
      case 2: b();break;
      case 3: c();break;
      case 4: d();break;
      case 5: e();break;
      case 6: f();break;
      case 7: g();break;
      case 8: dp();break;
    }
  }
}