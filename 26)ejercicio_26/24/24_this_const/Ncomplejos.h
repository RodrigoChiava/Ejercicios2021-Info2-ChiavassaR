#ifndef Ncomplejos_h
#define Ncomplejos_h

#include <iostream>

using namespace std;

class complejo{
public:
	complejo();		//contructor
	//-----------------------------
	void suma(double p1, double p2, double q1, double q2);
	void resta(double p1, double p2, double q1, double q2);
	//-------------------------------------------------------
	complejo &setComplejo(double real, double imaginario);
	complejo &setReal(double real);
	complejo &setImag(double imag);
	void imprimir() const;
	double getReal() const;
	double getImag() const;
private:
	double p, q; //p:parte real  q:parte imaginaria
};

#endif
