#ifndef NO PERECEDERO_H
#define NO PERECEDERO_H

#include "producto.h"

class NoPerecedero : public Producto{
public:
	NoPerecedero(string name, float cost, int type);
	void setterType(int t);
	int getterType() const;
private:
	int tipo;
};

#endif
