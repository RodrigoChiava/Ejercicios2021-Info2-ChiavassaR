#include <stdio.h>

struct complejo{
	float real;
	float imaginario;
};

int main(){
	struct complejo x;
	x.real = 1.3;
	x.imaginario = -2.2;
	
	struct complejo *px;
	px = &x;
	px->real = x.real + 23.4;
	px->imaginario = x.imaginario * 2;
	
	printf("El primer numero complejo x es : %.2f + %.2f i\n", px->real, px->imaginario);
	
	struct complejo y[100];
	y[17].real = 4;
	y[17].imaginario = 6;
	
	printf("El segundo numero complejo y es : %.2f + %.2f i\n", y[17].real, y[17].imaginario);
}
