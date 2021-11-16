#include <iostream>
using namespace std;

template <class T>

void minimo_valor(T c=3, T k=5){
	if(c<k){
		cout << "El menor valor es " << c << endl; 
	}
	else{
		cout << "El menor valor es " << k << endl;
	}
}

int main(){
	int c1=3, c2=5;
	float c3=5, c4=9;
	char c5=93, c6 = 23;
	minimo_valor(c1, c2);
	minimo_valor(c3, c4);
	minimo_valor(c5, c6);
	return 0;
}
