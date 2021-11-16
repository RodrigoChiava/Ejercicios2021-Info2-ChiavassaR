#ifndef VEL_ACEL_H
#define VEL_ACEL_H

#include <stdint.h>
#include <iostream>

using std::cout;
using std::endl;

class VelAcel{
public:
	VelAcel(float a_=0, float v_=0);  // constructor
	void setterV(uint16_t a1, uint16_t v1);
	void imprimirAceleracionG();
	float getterVelocidadMS();
	
private:
	uint16_t av, vv;
	float ag,vms;
};
#endif
