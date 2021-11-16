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

int mayor(int k,struct datos *per);

int main(){
	int i, n, m;
	p = (struct datos*) calloc(5,sizeof(struct datos));
	
	if((fpt=fopen("ARCHIVO.DAT","r"))==NULL)
	{
		printf("\nERROR - No se puede abrir archivo especificado\n");
	}
	else
	{
		for(i=0;i<5;i++){
			fread((uint8_t*)&p[i],sizeof(struct datos),1,fpt);
			printf("nombre %s\n",p[i].nombre);
			printf("edad %d\n",p[i].edad);
			printf("telefono %lu\n",p[i].telefono);
			printf("dni %lu\n",p[i].dni);
			printf("\n");
		}
		fclose(fpt);
	}
	
	printf("Ingrese un numero del 1 - 5 para mostrar los datos de la persona elegida\n");
	scanf("%d", &n);
	printf("\n");
	printf("nombre %s\n",p[n-1].nombre);
	printf("edad %d\n",p[n-1].edad);
	printf("telefono %lu\n",p[n-1].telefono);
	printf("dni %lu\n",p[n-1].dni);
	printf("%d", mayor(n-1,p));
}
	
int mayor(int k,struct datos *per){
	if(per[k].edad <18){
		return 1;
	}
	else{
		return 0;
	}
}
