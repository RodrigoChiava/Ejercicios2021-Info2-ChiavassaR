#include <Arduino.h>

#define pote 0
#define motor 3
void setup() {
  pinMode(pote, INPUT);
  pinMode(motor, OUTPUT);
}

void loop() {
  int lec;
  lec = analogRead(pote);
  analogWrite(motor, lec);
}