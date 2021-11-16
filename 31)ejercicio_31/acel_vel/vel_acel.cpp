#include "vel_acel.h"

VelAcel::VelAcel(float a_, float v_){
	this->setterV(512, 2048); 
}

void VelAcel::setterV(uint16_t a1, uint16_t v1){
	if(a1 >=0 && a1 <= 1023){
		av = a1;
	}
	else{
		cout << "Valor erroneo de aceleracion" << endl;
	}
	if(v1 >=0 && v1 <= 4095){
		vv = v1;
	}
	else{
		cout << "Valor erroneo de velocidad" << endl;
	}
}

void VelAcel::imprimirAceleracionG(){
	ag = av*5.0/1023.0;
	cout << "El valor leido de aceleracion es : " << ag << "g" << endl;
}

float VelAcel::getterVelocidadMS(){
	vms = vv*1000.0/4095.0;
	return vms;
}
