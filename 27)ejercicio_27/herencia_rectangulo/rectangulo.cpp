#include <iostream>
#include "rectangulo.h"

using namespace std;

rectangulo::rectangulo(int x_ , int y_ , int l_ , int a_ ){
	setear(x_,y_,l_,a_);
}

void rectangulo::setear(int x1, int y1, int l1, int a1){
	x = x1;
	y = y1;
	l = l1;
	a = a1;
}

int rectangulo::area(){
	return (l*a);
}

int rectangulo::perimetro(){
	return (2*l+2*a);
}

int rectangulo::obtener_x(){
	return x;
}
int rectangulo::obtener_y(){
	return y;
}
int rectangulo::obtener_l(){
	return l;
};
int rectangulo::obtener_a(){
	return a;
}

int rectangulo::dentro_de(rectangulo r){
	int ar1, ar2;
	ar1 = area();
	ar2 = r.area();
	if(ar1 > ar2){
		return 0;
	}
	else{
		if(x<r.x || y<r.y || (x+l)>(r.x + r.l) || (y+a)>(r.y+r.a)){
			return 0;
		}
		else{
			return 1;
		}
	}
}
