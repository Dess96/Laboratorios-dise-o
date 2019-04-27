#ifndef ARISTA
#define ARISTA

#include"Nodo.h"
#include<iostream>

using namespace std;

class Arista {
private:
	int id;
	Nodo origen;
	Nodo destino;
public:
	Arista() {};
	virtual ~Arista() {};
	virtual void imprimir() const = 0;
	void set_origen(Nodo inicio);
	Nodo get_origen();
	void set_destino(Nodo fin);
	Nodo get_destino();
	void set_id(int id);
	int get_id();
};

#endif // ARISTA!
