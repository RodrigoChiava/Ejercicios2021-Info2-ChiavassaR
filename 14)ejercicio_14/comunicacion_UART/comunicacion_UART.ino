#define Led 13

String datos;

void setup() {
  Serial.begin(115200);
  pinMode(Led,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    datos = Serial.readString();

    Serial.print("Datos:"); Serial.println(datos);

    if(datos == "E"){
      digitalWrite(Led, HIGH);
    }
    else{
      if(datos == "A"){
        digitalWrite(Led, LOW);
      }
    }
  }
}
