#include <iostream>
#include "rectangulo.h"

using std::cout;
using std::endl;

int main (){
	rectangulo r1(2,2,4,4);
	rectangulo r2(1,1,4,4);
	cout << "El area del primer rectangulo es " << r1.area() << "\n";
	cout << "El area del segundo rectangulo es " << r2.area() << "\n";
	cout << "El perimetro del primer rectangulo es " << r1.perimetro() << "\n";
	cout << "El perimetro del segundo rectangulo es " << r2.perimetro() << "\n";
	if(r1.dentro_de(r2)){
		cout << "El primer rectangulo esta dentro del segundo\n";
	}
	else{
		cout << "El primer rectangulo no esta dentro del segundo\n";
	}
	if(r2.dentro_de(r1)){
		cout << "El segundo rectangulo esta dentro del primero\n";
	}
	else{
		cout << "El segundo rectangulo no esta dentro del primero\n";
	}
	cout << "El area de la interseccion es " << r1.area_interseccion(r2) << "\n";
}
