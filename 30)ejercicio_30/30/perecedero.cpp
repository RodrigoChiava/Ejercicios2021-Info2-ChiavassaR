#include "perecedero.h"

Perecedero::Perecedero(string name, float cost, int expire) : Producto(name, cost){
	setterExpire(expire);
}

void Perecedero::setterExpire(int e){
	dias_caducar = e;
}

int Perecedero::getterExpire()const{
	return dias_caducar;
}

void Perecedero::calcular(int amount){
	float k;
	k = amount * costo;
	if(dias_caducar == 1){
		k = (k/4.0);
		cout << "Por la cantidad (" << amount << ") del producto perecedero que lleva (" << nombre << ") y los dias que faltan para que caduque (" << dias_caducar << ") el precio final es $" << k << endl;
	}
	else{
		if(dias_caducar == 2){
			k = (k/3.0);
			cout << "Por la cantidad (" << amount << ") del producto perecedero que lleva (" << nombre << ") y los dias que faltan para que caduque (" << dias_caducar << ") el precio final es $" << k << endl;
		}
		else{
			if(dias_caducar == 3){
				k = (k/2.0);
				cout << "Por la cantidad (" << amount << ") del producto perecedero que lleva (" << nombre << ") y los dias que faltan para que caduque (" << dias_caducar << ") el precio final es $" << k << endl;
			}
			else{
				cout << "El costo de llevar " << amount << " " << nombre << " es de $" << k << endl;
			}
		}
	}
}
