#include "Jugador.h"

Futbolista::Futbolista(string name, string surname, int number) : Persona(name, surname){
	setterNumber(number);
}

void Futbolista::setterNumber(int n){
	numero = n;
}

void Futbolista::Imprimir() const{
	cout << "El jugador ingresado es " << nombre << " " << apellido << " con el dorsal numero " << numero << endl;
}
