#include <iostream>
#include "rectangulo.h"

using namespace std;

rectangulo::rectangulo(int x_ , int y_ , int l_ , int a_ ){
	setear(x_,y_,l_,a_);
}

rectangulo &rectangulo::setear(int x1, int y1, int l1, int a1){
	setearX(x1).setearY(y1).setearL(l1).setearA(a1);
	return *this;
}

rectangulo &rectangulo::setearX(int x1){
	x=x1;
	return *this;
}
rectangulo &rectangulo::setearY(int y1){
	y=y1;
	return *this;
}
rectangulo &rectangulo::setearL(int l1){
	l=l1;
	return *this;
}
rectangulo &rectangulo::setearA(int a1){
	a=a1;
	return *this;
}

int rectangulo::area()const{
	return (l*a);
}

int rectangulo::perimetro()const{
	return (2*l+2*a);
}

int rectangulo::obtener_x()const{
	return x;
}
int rectangulo::obtener_y()const{
	return y;
}
int rectangulo::obtener_l()const{
	return l;
};
int rectangulo::obtener_a()const{
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
