#include "vel_acel.h"

#ifndef CAMPO_H
#define CAMPO_H


class Magnetico : public VelAcel {
public:
	void imprimirCampo(); // Imprime en pantalla el campo magnético en uT
	void establecerCampoAdc(uint16_t valor); //Establece el valor de campo magnetico de 0 a 511. Este valor podría provenir del ACD por ejemplo.
	
private:
	uint16_t campoAdc; //Variable que va de 0 a 511 y proviene del sensor
	uint16_t campoUT; //Variable convertida que va de 0 a 4800 uT
};

#endif
