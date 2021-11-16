#include <iostream>
#include "Ncomplejos.h"

using std::cout;
using std::endl;

complejo::complejo(){
	cout << "constructor." << endl;
	p = 10;
	q = 13;
}

complejo::complejo(double p_, double q_){
	p = p_;
	q = q_;
}

void complejo ::suma(double p1, double p2, double q1, double q2){
	double pt, qt;
	pt = p1+p2;
	qt = q1+q2;
	cout << "La suma de los dos numeros complejos ingresados es: " << pt << " + (" << qt << " i)/n" << endl;
}

void complejo::resta(double p1, double p2, double q1, double q2){
	double pt, qt;
	pt = p1-p2;
	qt = q1-q2;
	cout << "La resta de los dos numeros complejos ingresados es: " << pt << " + (" << qt << " i)/n" << endl;
}

void complejo::establecerComplejo(double real, double imaginario){
	p = real;
	q = imaginario;
}

void complejo::imprimir(){
	cout << "El numero complejo ingresado es: " << p << " + (" << q << " i)/n" << endl;
}
