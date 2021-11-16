#ifndef Ncomplejos_h
#define Ncomplejos_h

#include <iostream>

using namespace std;

class complejo{
	public:
		complejo();		//contructor
		complejo(double p_, double q_);
		//-----------------------------
		void suma(double p1, double p2, double q1, double q2);
		void resta(double p1, double p2, double q1, double q2);
		//-------------------------------------------------------
		void establecerComplejo(double real, double imaginario);
		void imprimir();
	private:
		double p, q; //p:parte real  q:parte imaginaria
};

#endif
