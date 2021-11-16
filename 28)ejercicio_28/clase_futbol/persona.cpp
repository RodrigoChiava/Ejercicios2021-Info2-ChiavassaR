#include "persona.h"

Persona::Persona(string name, string surname){
	setterName(name).setterSurname(surname);
}

Persona &Persona::setterName(string n){
	nombre = n;
	return *this;
}

Persona &Persona::setterSurname(string a){
	apellido = a;
	return *this;
}

string Persona::getterName() const{
	return nombre;
}

string Persona::getterSurname() const{
	return apellido;
}
	
