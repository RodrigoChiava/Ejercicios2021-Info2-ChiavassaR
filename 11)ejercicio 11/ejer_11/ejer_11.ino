void setup() {
  DDRD = DDRD | B01111111; //Declaro las Salidas
  DDRB = DDRB | B00011111; //Delclaro las entradas
}



void loop() {
  byte columnas, filas;
  for(columnas = B00000001; columnas <= B00010000; columnas = columnas<<1){
    PORTB = columnas;
    for(filas = B00000001; filas <= B00010000; filas = filas<<1){
      PORTD =~filas;
      delay(1000);
    }
  }

}
