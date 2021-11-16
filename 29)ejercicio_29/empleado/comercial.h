#ifndef COMERCIAL_H
#define COMERCIAL_H

#include "empleado.h"

class Comercial : public Empleado{
public:
	Comercial(string name, int age, long salary, double commission);
	void setterCommission(double commission);
	double getterCommission() const;
	void Plus();
private:
	double comision;
	long salario_aumentado;
};

#endif
