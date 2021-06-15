#include <Arduino.h>
#define pul_1 1
#define pul_2 2
#define led1 3
#define led2 4
#define led3 5

void setup() {
pinMode(pul_1,INPUT);
pinMode(pul_2,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);

}

void loop() {

if(digitalRead(pul_1)==1){
  while(1){
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    if(digitalRead(pul_2)==1){
      break;
    }
  }
}
if(digitalRead(pul_2)==1){
  while(1){
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
  delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    if(digitalRead(pul_1)==1){
     break; 
    }
  }
}
}