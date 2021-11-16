#include "no perecedero.h"

NoPerecedero::NoPerecedero(string name, float cost, int type) : Producto(name, cost){
	setterType(type);
}

void NoPerecedero::setterType(int t){
	tipo = t;
}

int NoPerecedero::getterType()const{
	return tipo;
}
