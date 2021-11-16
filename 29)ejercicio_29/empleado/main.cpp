#include "empleado.h"
#include "comercial.h"
#include "repartidor.h"

int main(){
	Empleado uno("Rodrigo Chiavassa", 20, 6700);
	cout << "El empleado uno es " << uno.getterName() << " de " << uno.getterAge() << " anios con un salario de $" << uno.getterSalary() << endl;
	cout << "El plus predeterminado es de $" << uno.getterPlus() << endl;
	cout << endl;
	
	Comercial dos("Joaquin Rivarola", 50, 8000, 26000);
	cout << "El empleado dos es comercial llamado " << dos.getterName() << " de " << dos.getterAge() << " anios y cobra una comision de $" << dos.getterCommission() << endl;
	dos.Plus();
	cout << endl;
	Comercial tres("Matias Musso", 29, 9000, 26000);
	cout << "El empleado tres es comercial llamado " << tres.getterName() << " de " << tres.getterAge() << " anios y cobra una comision de $" << tres.getterCommission() << endl;
	tres.Plus();
	cout << endl;
	Comercial cuatro("Axel Giordanino", 43, 7000, 23000);
	cout << "El empleado cuatro es comercial llamado " << cuatro.getterName() << " de " << cuatro.getterAge() << " anios y cobra una comision de $" << cuatro.getterCommission() << endl;
	cuatro.Plus();
	cout << endl;
	Comercial cinco("Alvaro Dosio", 25, 10000, 20000);
	cout << "El empleado cinco es comercial llamado " << cinco.getterName() << " de " << cinco.getterAge() << " anios y cobra una comision de $" << cinco.getterCommission() << endl;
	tres.Plus();
	cout << endl;
	
	Repartidor seis("Alejo Ferrao", 20, 12000, 3);
	cout << "El empleado seis es repartidor llamado " << seis.getterName() << " de " << seis.getterAge() << " anios y trabaja en la zona " << seis.getterZone() << endl;
	seis.Plus();
	cout << endl;
	Repartidor siete("Milagros Perez", 28, 11000, 3);
	cout << "El empleado siete es repartidor llamado " << siete.getterName() << " de " << siete.getterAge() << " anios y trabaja en la zona " << siete.getterZone() << endl;
	siete.Plus();
	cout << endl;
	Repartidor ocho("Julieta Sarmiento", 24, 15000, 1);
	cout << "El empleado ocho es repartidor llamado " << ocho.getterName() << " de " << ocho.getterAge() << " anios y trabaja en la zona " << ocho.getterZone() << endl;
	ocho.Plus();
	cout << endl;
	Repartidor nueve("Elias Robledo", 27, 16000, 2);
	cout << "El empleado nueve es repartidor llamado " << nueve.getterName() << " de " << nueve.getterAge() << " anios y trabaja en la zona " << nueve.getterZone() << endl;
	nueve.Plus();
	cout << endl;
	
	return 0;
}
