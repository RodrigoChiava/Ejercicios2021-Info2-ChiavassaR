#include <stdio.h>

int main(){
	long int valor1 = 200000, valor2;
	long int *ptrL;
	
	ptrL = &valor1;
	printf("El valor del objeto al que apunta ptrL es: %ld\n", *ptrL);
	
	valor2=*ptrL;
	printf("El valor de valor2 es: %ld\n", valor2);
	
	printf("La direccion de valor1 es: %ld\n", &valor1);
	printf("La direccion de ptrL es: %ld\n", ptrL);
	if(&valor1 == ptrL){
		printf("Las direcciones de valor1 y ptrL son iguales\n");
	}
	else{
		printf("Las direcciones de valor1 y ptrL son distintas\n");
	}
}
