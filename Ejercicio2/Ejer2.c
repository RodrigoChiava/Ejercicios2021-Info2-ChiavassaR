#include <stdio.h>
#include <math.h>

int main(){
	double monto; //monto del deposito
	double principal = 1000.0; //monto principal
	double tasa;
	int anio; //contador de años
	char l;
	
	//printf("anios = %d, monto = %lf\n", anio, monto);
	
	printf("¿A que tasa va a querer ingresar el monto inicial?\n");
	printf("a - tasa de 5%\n");
	printf("b - tasa de 6%\n");
	printf("c - tasa de 7%\n");
	printf("d - tasa de 8%\n");
	printf("e - tasa de 9%\n");
	printf("f - tasa de 10%\n");
	scanf("%c", &l);
	
	switch(l){
	case 'a':
		tasa = .05;
		break;
	case 'b':
		tasa = .06;
		break;
	case 'c':
		tasa = .07;
		break;
	case 'd':
		tasa = .08;
		break;
	case 'e':
		tasa = .09;
		break;
	case 'f':
		tasa = .1;
		break;
	}
	
	for(anio=1; anio<=10; anio++){
		monto = principal * pow(1.0 + tasa, anio);
		printf("El monto del anio %d es: %lf\n", anio, monto);
	}
	return 0;
}