#include <stdio.h>

int main(){
	char l;
	int i;
	printf("¿Que operacion desea realizar?\n");
	printf("a - Despliegue el valor del séptimo elemento del arreglo de caracteres f.\n");
	printf("b - Introduzca un valor en el elemento 4 del arreglo de punto flotante con un solo subíndice, b.\n");
	printf("c - Inicialice en 8 cada uno de los 5 elementos del arreglo entero g.\n");
	printf("d - Sume los elementos del arreglo de punto flotante c, el cual contiene 100 elementos.\n");
	printf("e - Copie el arreglo a en la primera porción del arreglo b. Suponga que double a[ 11 ], b[ 34 ].\n");
	scanf("%c", &l);
	
	switch(l){
	case 'a':
		char f[10]={'R','o','d','r','i','g','o','C','h','i'};
		char k;
		printf("El contenido del array es: ");
		for(i=0;i<10;i++){
			printf("- %c -", f[i]);
			if(i==7){
				k = f[i];
			}
		}
		printf("\n");
		printf("El septimo elemento del array es: %c\n", k);
		break;
	case 'b':
		float b[8]={1.3445,33.4432,75.677,3.43,6.24,7.34,5.234,2.12};
		printf("El elemento 4 del array es %f, cambielo por uno de un solo indice\n", b[4]);
		scanf("%f", &b[4]);
		printf("El nuevo elemento 4 es %f\n", b[4]);
		break;
	case 'c':
		int g[5]={45,9,23,54,66};
		int n;
		for(i=0;i<5;i++){
			n=g[i];
			g[i]=8;
			printf("El elemento %d del arreglo era %d y ahora %d\n", i, n, g[i]);
		}
		break;
	case 'd':
		float m[100] = {0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.86,0.87,0.88,0.89,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.0};;
		float suma=0;
		for(i=0;i<100;i++){
			suma=suma + m[i];
		}
		break;
	case 'e':
		double a[11], v[34]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		printf("El arreglo b: ");
		for(i=0;i<34;i++){
			printf("- %lf -", b[i]);
		}
		printf("\n");
		printf("Ingrese los valores del arreglo a\n");
		for(i=0;i<11;i++){
			printf("Ingrese el elemento %d\n", i); scanf("%lf", &a[i]);
		}
		for(i=0;i<11;i++){
			b[i] = a[i];
		}
		printf("El nuevo arreglo b: ");
		for(i=0;i<34;i++){
			printf("- %lf -", b[i]);
		}
		break;
	}
}
