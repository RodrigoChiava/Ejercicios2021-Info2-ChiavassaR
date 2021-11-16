#include <iostream>
using namespace std;

int tripleLlamadaPorValor(int c);
void triplePorReferencia(int &c);

int main(){
	int c1=3, c2=3;
	c1 = tripleLlamadaPorValor(c1);
	triplePorReferencia(c2);
	
	cout << "El valor devuelto por la funcion de valor es " << c1 << " y el valor de la funcion de referencia es " << c2 << endl;
	return 0;
}

int tripleLlamadaPorValor(int c){
	c = c*c*c;
	return c;
}

void triplePorReferencia(int &c){
	c = c*c*c;
}
