#include <iostream>
#include "Ncomplejos.h"

using namespace std;

int main(){
	int i;
	double real1, imag1, real2, imag2;
	complejo A;
	cout << "¿Que operacion desea realizar?/n" << endl;
	cout << "1 - mostrar numero complejo por defecto./n" << endl;
	cout << "2 - mostrar numero complejo ingresado por teclado./n" << endl;
	cout << "3 - sumar dos numero complejos ingresados por teclado./n" << endl;
	cout << "4 - restar dos numero complejos ingresados por teclado./n" << endl;
	cin >> i;
	switch(i){
	case 1:{
		A.imprimir();
		break;
	};
	case 2:{
		cout << "ingrese primero la parte real y despues la imaginaria/n" << endl;
		cin >> real1; cin >> imag1;
		A.setComplejo(real1, imag1);
		A.imprimir();
		break;
	};
	case 3:{
		cout << "Primer numero, ingrese primero la parte real y despues la imaginaria/n" << endl;
		cin >> real1; cin >> imag1;
		cout << "Segundo numero, ingrese primero la parte real y despues la imaginaria/n" << endl;
		cin >> real2; cin >> imag2;
		A.suma(real1, real2, imag1, imag2);
		break;
	};
	case 4:{
		cout << "Primer numero, ingrese primero la parte real y despues la imaginaria/n" << endl;
		cin >> real1; cin >> imag1;
		cout << "Segundo numero, ingrese primero la parte real y despues la imaginaria/n" << endl;
		cin >> real2; cin >> imag2;
		A.resta(real1, real2, imag1, imag2);
		break;
	};
	}
	return 0;
}
