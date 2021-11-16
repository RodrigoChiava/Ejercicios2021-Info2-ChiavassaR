#include "producto.h"
#include "perecedero.h"
#include "no perecedero.h"

int main(){
	Producto A("Carpeta", 1000.0);
	cout << "El producto es : " << A.getterName() << " y su precio es de $" << A.getterCost() << endl;
	A.calcular(3);
	cout << endl;cout << endl;
	
	Perecedero B("Crema", 200.0, 1);
	cout << "El producto perecedero es : " << B.getterName() << " y su precio es de $" << B.getterCost() << endl;
	B.calcular(2);
	cout << endl;
	Perecedero C("Mayonesa", 90.0, 2);
	cout << "El producto perecedero es : " << C.getterName() << " y su precio es de $" << C.getterCost() << endl;
	C.calcular(5);
	cout << endl;
	Perecedero D("Pure de tomates", 100.0, 3);
	cout << "El producto perecedero es : " << D.getterName() << " y su precio es de $" << D.getterCost() << endl;
	D.calcular(4);
	cout << endl;
	Perecedero E("Manteca", 80.0, 4);
	cout << "El producto perecedero es : " << E.getterName() << " y su precio es de $" << E.getterCost() << endl;
	E.calcular(2);
	cout << endl;cout << endl;
	
	NoPerecedero F("Fideos", 130.0, 2);
	cout << "El producto no perecedero es : " << F.getterName() << ", del tipo " << F.getterType() << " y su precio es de $" <<F.getterCost() << endl;
	F.calcular(10);
	cout << endl;
	NoPerecedero G("Arroz", 115.0, 3);
	cout << "El producto no perecedero es : " << G.getterName() << ", del tipo " << G.getterType() << " y su precio es de $" <<G.getterCost() << endl;
	G.calcular(5);
	cout << endl;
}
