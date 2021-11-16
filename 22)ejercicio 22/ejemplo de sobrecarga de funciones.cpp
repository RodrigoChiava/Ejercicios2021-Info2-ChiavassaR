#include <iostream>
using namespace std;

void minimo_valor(int c=3, int k=5);
void minimo_valor(float c, float k);

int main(){
	int c1=3, c2=5;
	float c3=5, c4=9;
	minimo_valor();
	minimo_valor(c4);
	return 0;
}
	
void minimo_valor(int c, int k){
	if(c<k){
		cout << "El menor valor es " << c << endl; 
	}
	else{
		cout << "El menor valor es " << k << endl;
	}
}

void minimo_valor(float c, float k){
	if(c<k){
		cout << "El menor valor es " << c << endl;
	}
	else{
		cout << "El menor valor es " << k << endl;
	}
}
