#include <Arduino.h>
#define pote A0

 struct sensores{
  char tipo;
  int valor;
  unsigned long tiempo;
}pot;
  
void setup() {
  Serial.begin(9600);
}

void loop() { 
  Serial.print("El tamanio de la variable tipo struct sensores es: ");
  int tamano = sizeof(pot);
  Serial.println(tamano);
}