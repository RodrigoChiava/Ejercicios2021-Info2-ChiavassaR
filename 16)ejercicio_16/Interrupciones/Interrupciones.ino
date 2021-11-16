volatile int cont = 0;
int n = cont ;

void InterrupcionPulsador();

void setup()
{
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600); 
  attachInterrupt(0, InterrupcionPulsador, FALLING);
}

void loop()
{
  if (n != cont){
    Serial.println(cont);
    n = cont ;
  }
}

void InterrupcionPulsador()
{
    cont++ ;
}
