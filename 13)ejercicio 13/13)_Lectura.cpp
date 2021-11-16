#include <stdio.h>			//
#include <string.h>			//Incluimos las librerias
#include <conio.h>			//
#include <stdint.h>

struct Sensor{				//estructura igual a la de arduino pero sin el byte de relleno
	uint32_t tiempo;
	int16_t valor;
	char letra;
}infoLetura;				//declaramos la estructura tipo Sensor

FILE *pt;					//creamos un puntero tipo file
int a=0;

int main()
{
	if((pt=fopen("SENSORES.txt","r"))==NULL)
	{
		printf("\nERROR - No se puede abrir archivo especificado\n");
	}
	else
	{
		a = sizeof(infoLetura);
		while ( !feof( pt ) ){												//y me va a mostrar todo lo que esta en el archivo hasta que termine
			fread((uint8_t*)&infoLetura,a,1,pt);							//lee el archivo
			printf("Nombre %c\n",infoLetura.letra);
			printf("Medicion %d\n",infoLetura.valor);					//imprimimos todos los datos obtenidos del siguente sentor.
			printf("Tiempo %lu\n",infoLetura.tiempo);
		}
		fclose(pt);															//cerramos archivo
	}
	
	return(0);
}
