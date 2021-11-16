#include "repartidor.h"

Repartidor::Repartidor(string name, int age, long salary, int zone) : Empleado(name, age, salary){
	setterZone(zone);
}

void Repartidor::setterZone(int zone){
	zona = zone;
}

int Repartidor::getterZone() const{
	return zona;
}

void Repartidor::Plus(){
	if (edad < 25 && zona == 3){
		salario_aumentado = salario + plus;
		cout << "Su salario original es de $" << salario << " pero como cumple con ciertos requisitos su salario se aumenta con el plus de $5000 a $" << salario_aumentado << endl;
	}
	else {
		cout << "Su salario es de $" << salario << " y no cobra el plus ya que no cumple con los requisitos" << endl;
	}
}
