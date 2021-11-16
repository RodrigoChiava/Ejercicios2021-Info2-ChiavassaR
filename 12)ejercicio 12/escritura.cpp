#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdint.h>

struct sensores{
	char tipo;
	int valor;
	unsigned long tiempo;
}sen;

FILE *ptr;

int main(){
	printf("Ingrese la inicial del sensor que va a utilizar\n"); scanf("%c", &sen.tipo);
	printf("Ingrese el valor medido por el sensor\n"); scanf("%d", &sen.valor);
	printf("Ingrese el tiempo\n"); scanf("%ld", &sen.tiempo);
	
	if((ptr=fopen("lecturas.dat", "w"))==NULL){
		printf("No existe dicho archivo\n");
	}
	else{
		fwrite(&sen, sizeof(struct sensores), 1, ptr);
		fclose(ptr);
	}
}
