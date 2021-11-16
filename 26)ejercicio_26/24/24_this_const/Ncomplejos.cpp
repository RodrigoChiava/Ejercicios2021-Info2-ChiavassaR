#include <iostream>
#include "Ncomplejos.h"

using std::cout;
using std::endl;

complejo::complejo(){
	cout << "constructor." << endl;
	p = 10;
	q = 13;
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

complejo &complejo::setComplejo(double real, double imaginario){
	setReal(real).setImag(imaginario);
	return *this;
}

complejo &complejo::setReal(double real){
	p = real;
	return *this;
}

complejo &complejo::setImag(double imaginario){
	q = imaginario;
	return *this;
}

void complejo::imprimir()const{
	cout << "El numero complejo ingresado es: " << (getReal()) << " + (" << (getImag()) << " i)/n" << endl;
}

double complejo::getReal() const{
	return p;
}
double complejo::getImag() const{
	return q;
}
