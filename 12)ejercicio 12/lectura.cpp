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
	if((ptr=fopen("lecturas.dat", "r"))==NULL){
		printf("No existe dicho archivo\n");
	}
	else{
		while(!feof(ptr)){
			fread((uint8_t*)&sen, sizeof(sensores), 1, ptr);
			printf("El sensor utilizado es : %c\n", sen.tipo);
			printf("Su medicion es de: %d\n", sen.valor);
			printf("El Tiempo: %lu\n", sen.tiempo);
		}
		fclose(ptr);
	}
	return(0);
}
