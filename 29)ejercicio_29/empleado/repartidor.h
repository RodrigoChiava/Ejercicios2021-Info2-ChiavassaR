#ifndef REPARTIDOR_H
#define REPARTIDOR_H

#include "empleado.h"

class Repartidor : public Empleado{
public:
	Repartidor(string name, int age, long salary, int zone);
	void setterZone(int zone);
	int getterZone() const;
	void Plus();
private:
	double zona;
	long salario_aumentado;
};

#endif
