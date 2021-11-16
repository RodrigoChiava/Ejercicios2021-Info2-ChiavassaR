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
	
int rectangulo::area_interseccion(rectangulo r){
	int ladoL, ladoA;
	if((x+l) <= r.x || (x) >= (r.x+r.l) || (y+a) <= r.y || (y) >= (r.y+r.a)){
		return 0;
	}
	else{
		if(y<=r.y && (y+a)<=(r.y+r.a)){
			ladoL = y + a - r.y;
		}
		else if(y>=r.y && (y+a)>=(r.y+r.a)){
			ladoL = r.y + r.a - y;
		}
		else if(a<r.a)
		{
			ladoL = a;
		}
		else
		{
			ladoL=r.a;
		}
		
		if(x<=r.x && (x+l)<=(r.x+r.l))
		{
			ladoA = x + l - r.x;
		}
		else if(x>=r.x && (x+l)>=(r.x+r.l))
		{
			ladoA = r.x + r.l - x;
		}
		else if(l<r.l)
		{
			ladoA = l;
		}
		else
		{
			ladoA=r.l;
		}
		return (ladoA*ladoL);
	}
}
