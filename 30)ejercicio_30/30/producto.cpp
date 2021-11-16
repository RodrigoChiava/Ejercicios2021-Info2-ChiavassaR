#include "producto.h"

Producto::Producto(string name, float cost){
	setterName(name).setterCost(cost);
}

Producto &Producto::setterName(string n){
	nombre = n;
	return *this;
}

Producto &Producto::setterCost(float c){
	costo = c;
	return *this;
}

string Producto::getterName()const{
	return nombre;
}

float Producto::getterCost()const{
	return costo;
}

void Producto::calcular(int amount){
	float k;
	k = amount * costo;
	cout << "El costo de llevar " << amount << " " << nombre << " es de $" << k << endl;
}
