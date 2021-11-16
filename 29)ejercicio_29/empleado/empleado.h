#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
using namespace std;

class Empleado{
public:
	Empleado(string name, int age, long salary);
	Empleado &setterName(string name);
	Empleado &setterAge(int age);
	Empleado &setterSalary(long salary);
	Empleado &setterPlus(long Plus);
	string getterName() const;
	int getterAge() const;
	long getterSalary() const;
	long getterPlus() const;
	
protected:
	string nombre;
	int edad;
	long salario, plus;
};

#endif
