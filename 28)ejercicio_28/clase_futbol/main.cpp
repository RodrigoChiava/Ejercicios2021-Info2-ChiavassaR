#include <iostream>
#include "persona.h"
#include "Jugador.h"

using namespace std;

int main(){
	Persona p("Rodrigo", "Chiavassa");
	cout << "La persona ingresada es: " << p.getterName() << " " << p.getterSurname() << endl;
	
	Futbolista f("Enzo", "Perez", 24);
	f.Imprimir();
}
