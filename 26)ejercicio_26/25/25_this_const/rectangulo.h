#ifndef RECTANGULO_H
#define RECTANGULO_H

class rectangulo{
public:
	rectangulo(int x_ = 1, int y_ = 1, int l_ = 1, int a_ = 1);  // constructor
	int area()const;
	int perimetro()const;
	rectangulo &setear(int x1, int y1, int l1, int a1);
	rectangulo &setearX(int x1);
	rectangulo &setearY(int y1);
	rectangulo &setearL(int l1);
	rectangulo &setearA(int a1);
	int obtener_x()const;
	int obtener_y()const;
	int obtener_l()const;
	int obtener_a()const;
	int dentro_de(rectangulo);
	int area_interseccion(rectangulo);
	
private:
	int x,y,l,a;
};
#endif
