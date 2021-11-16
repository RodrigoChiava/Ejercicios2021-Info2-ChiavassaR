#ifndef PERECEDERO_H
#define PERECEDERO_H

#include "producto.h"

class Perecedero : public Producto{
public:
	Perecedero(string name, float cost, int expire);
	void setterExpire(int e);
	int getterExpire()const;
	void calcular(int amount);
private:
	int dias_caducar;
};

#endif
