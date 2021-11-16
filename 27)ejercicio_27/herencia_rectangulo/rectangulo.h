#ifndef RECTANGULO_H
#define RECTANGULO_H

class rectangulo{
public:
	rectangulo(int x_, int y_, int l_, int a_ );  // constructor
	int area();
	int perimetro();
	void setear(int x1, int y1, int l1, int a1);
	int obtener_x();
	int obtener_y();
	int obtener_l();
	int obtener_a();
	int dentro_de(rectangulo);
	
private:
	int x,y,l,a;
};
#endif
