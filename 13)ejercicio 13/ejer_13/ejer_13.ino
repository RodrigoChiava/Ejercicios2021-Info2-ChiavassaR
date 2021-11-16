#include <SPI.h>
#include <SD.h>

 struct sensor{        //Definimos una estructura
  uint32_t tiempo;     //Tiempo entre medida y medida
  uint16_t valor;      //valor leido por la entrada
  char tipo;           //Letra para identificar el sensor
  char byte_relleno;    //Variable char de relleno para que esta struct sea de igual tamaño que la struct del programa de lectura en C, ambas de 8 bytes
}sen;

File myFile;

void setup() {
 Serial.begin(9600);                        //inicializamos el puerto serie
   if (!SD.begin(10)) {                        //Declaramos el CS al pin 4;
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");

}

void loop() {
  sen.tipo = 'l';
  sen.valor = 234;
  sen.tiempo = millis();

  myFile = SD.open("sensores.txt", FILE_WRITE);             //creamos/abrimos el archivo para su escritura

    if (myFile) {
    
      myFile.write((const uint8_t *)&sen, sizeof(sen));
      // close the file:
      myFile.close();                                        //Cerramos el archivo
      Serial.println("done.");
    } else {
        // if the file didn't open, print an error:
        Serial.println("error opening test.txt");
      }
      Serial.println("Datos guardados");
  }  
