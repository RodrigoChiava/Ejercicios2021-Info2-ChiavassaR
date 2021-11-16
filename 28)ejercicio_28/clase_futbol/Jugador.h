#ifndef JUGADOR_H
#define JUGADOR_H

#include "persona.h"
using namespace std;

class Futbolista : public Persona{
public:
	Futbolista(string name, string surname, int number);
	void setterNumber(int n);
	void Imprimir()const;
private:
	int numero;
};

#endif
