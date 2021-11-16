#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona{
public:
	Persona(string name, string surname);
	Persona &setterName(string n);
	Persona &setterSurname(string a);
	string getterName() const;
	string getterSurname() const;
protected:
	string nombre;
	string apellido;
};

#endif
