#include <iostream>
using namespace std;

int main(){
	char nombre[20], domicilio[50], ciudad[50], estado[50];
	int cod_pos;
	
	cout << "Introduzca su nombre" << endl; 
	cin >> nombre;
	cin.ignore();

	cout << "Introduzca su domicilio" << endl; 
	cin.getline(domicilio,50);

	cout << "Introduzca su ciudad" << endl;
	cin.getline(ciudad,50);
	
	cout << "Introduzca su estado" << endl;
	cin.getline(estado,50);
	
	cout << "Introduzca su codigo postal" << endl; 
	cin >> cod_pos;
	cin.ignore();
	
	cout <<endl;
	
	cout << "Su nombre es : " << nombre << endl;
	cout << "Su domicilio es: " << domicilio << endl;
	cout << "Su ciudad es: " << ciudad << ", su estado es " << estado << " y su codigo postal es " << cod_pos << endl;
	return 0;
}
