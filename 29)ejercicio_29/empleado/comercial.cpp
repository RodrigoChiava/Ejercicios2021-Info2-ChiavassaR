#include "comercial.h"

Comercial::Comercial(string name, int age, long salary, double commission) : Empleado(name, age, salary){
	setterCommission(commission);
}

void Comercial::setterCommission(double commission){
	comision = commission;
}

double Comercial::getterCommission() const{
	return comision;
}

void Comercial::Plus(){
	if (edad > 30 && comision > 25000){
		salario_aumentado = salario + plus;
		cout << "Su salario original es de $" << salario << " pero como cumple con ciertos requisitos su salario se aumenta con el plus de $5000 a $" << salario_aumentado << endl;
	}
	else {
		cout << "Su salario es de $" << salario << " y no cobra el plus ya que no cumple con los requisitos" << endl;
	}
}
