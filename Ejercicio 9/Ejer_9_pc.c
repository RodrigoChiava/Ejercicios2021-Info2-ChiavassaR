#include <stdio.h>

struct sensores{
	char tipo;
	int valor;
	unsigned long tiempo;
}pot;

int main() { 
	printf("El tamanio de la variable tipo struct sensores es: ");
	int tamano = sizeof(pot);
	printf("%d",tamano);
}
