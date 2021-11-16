#include <iostream>
#include "VEL_ACEL.H"
#include "campo.h"

int main(){
	float velocidad;
	VelAcel S1;
	S1.imprimirAceleracionG();
	
	velocidad = S1.getterVelocidadMS();
	cout << "La velocidad leida por el sensor es de: " << velocidad <<" m/s." << endl;
	
	Magnetico sensor2; // Crea el objeto
	
	sensor2.imprimirAceleracionG(); // Imprime aceleracion cargada por el constuctor
	
	velocidad = sensor2.getterVelocidadMS(); //Consulta la velocidad en m/s
	cout << "La velocidad es de " << velocidad <<" m/s." << endl;
	
	sensor2.establecerCampoAdc(200);
	sensor2.imprimirCampo();
	
	return 0;
}
