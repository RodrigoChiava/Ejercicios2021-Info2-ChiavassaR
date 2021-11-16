#include "campo.h"

//*************************** M�todos *********************
// Imprime en pantalla el campo magn�tico en uT
void Magnetico::imprimirCampo()
{
	campoUT = campoAdc*4800.0/511.0;
	cout << "El campo magnetico es de " << campoUT << " uT." << endl;
}

//Establece el valor de campo magnetico de 0 a 511. Este valor podr�a provenir del ACD por ejemplo.
void Magnetico::establecerCampoAdc(uint16_t valor)
{
	if( (valor >= 0) && (valor <= 511)) //Para asegurarse de que el valor sea v�lido
	{
		campoAdc = valor;
	}
	else
	{
		cout << "Valor de campo magnetico no valido" << endl;
	}
}
