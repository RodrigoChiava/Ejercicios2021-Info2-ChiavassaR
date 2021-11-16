#include "empleado.h"

Empleado::Empleado(string name, int age, long salary){
	setterName(name).setterAge(age).setterSalary(salary).setterPlus(5000);
}

Empleado &Empleado::setterName(string name){
	nombre = name;
	return *this;
}

Empleado &Empleado::setterAge(int age){
	edad = age;
	return *this;
}

Empleado &Empleado::setterSalary(long salary){
	salario = salary;
	return *this;
}

Empleado &Empleado::setterPlus(long Plus){
	plus = Plus;
	return *this;
}

string Empleado::getterName() const{
	return nombre;
}

int Empleado::getterAge() const{
	return edad;
}

	
long Empleado::getterSalary() const{
	return salario;
}

	
long Empleado::getterPlus() const{
	return plus;
}
