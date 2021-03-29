#include <stdio.h>

int main(){
	int acum=0, n=0, cont=0;
	float prom=0.0;
	printf("Programa para calcular e imprimir el promedio de varios numeros ingresados por teclado\n");
	printf("Ingrese los numeros que quiera promediar, cuando quiera terminar de ingresar, escriba 9999.\n");
		while(n!=9999){
		scanf("%d", &n);
		acum = acum+n;
		cont = cont + 1;
	}
		acum = acum - 9999;
		cont=cont-1;
		//printf("%d\n", acum);
		//printf("%d\n", cont);
		prom = acum/cont;
		printf("El promedio de los numeros ingresados es: %.2f\n", prom);
}