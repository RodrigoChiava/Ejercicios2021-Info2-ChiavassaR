#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

using namespace std;

class Producto{
public:
	Producto(string name, float cost);
	Producto &setterName(string n);
	Producto &setterCost(float c);
	string getterName() const;
	float getterCost() const;
	void calcular(int amount);
protected:
	string nombre;
	float costo;
};

#endif
