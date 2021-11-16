#include <iostream>
#include "rectangulo.h"
#include "cuadrado.h"

using std::cout;
using std::endl;

int main(){
	cuadrado c1(2,4,4);
	cuadrado c2(1,4,5);
	cout << "El area del primer cuadrado es " << c1.area() << "\n";
	cout << "El area del segundo cuadrado es " << c2.area() << "\n";
	cout << "El perimetro del primer cuadrado es " << c1.perimetro() << "\n";
	cout << "El perimetro del segundo cuadrado es " << c2.perimetro() << "\n";
	if(c1.dentro_de(c2)){
		cout << "El primer cuadrado esta dentro del segundo\n";
	}
	else{
		cout << "El primer cuadrado no esta dentro del segundo\n";
	}
	if(c2.dentro_de(c1)){
		cout << "El segundo cuadrado esta dentro del primero\n";
	}
	else{
		cout << "El segundo cuadrado no esta dentro del primero\n";
	}
}
