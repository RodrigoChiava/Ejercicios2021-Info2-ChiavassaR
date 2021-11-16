#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

struct datos{
	char nombre[15];
	int edad;
	long telefono;
	long dni;
}*p;

FILE *fpt;

int main(){
	int i, tam;
	p = (struct datos*) calloc(5,sizeof(struct datos));
	for(i=0;i<5;i++){
		printf("Ingrese los datos de la persona %d\n",i);
		printf("Ingrese su nombre\n");
		scanf("%s", &p[i].nombre);
		printf("Ingrese su edad\n");
		scanf("%d", &p[i].edad);
		printf("Ingrese su telefono\n");
		scanf("%lu", &p[i].telefono);
		printf("Ingrese su dni\n");
		scanf("%lu", &p[i].dni);
	}
	
	if((fpt=fopen("ARCHIVO.DAT","wb"))==NULL)
	{
		printf("\nERROR - No se puede abrir archivo especificado\n");
	}
	else
	{
		for(i=0;i<5;i++){
		fwrite((uint8_t*)&p[i], sizeof(struct datos) , 1, fpt);
		}
		fclose(fpt);
		free(p);
	}
}
