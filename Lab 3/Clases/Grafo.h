#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"
#include "Implementaciones.h"

using namespace std;

class Grafo {
protected:
	Implementaciones& imp;
	Grafo(Implementaciones& imp) : imp{imp} {}

public:
	
	~Grafo() {};
	virtual void agregar_arista(Nodo origen, Nodo destino) = 0;
	virtual void agregar_nodo(Nodo agr_nodo) = 0;
	virtual void eliminar_arista(Nodo origen, Nodo destino) = 0;
	virtual void eliminar_nodo(int id) = 0;
};
#endif // !GRAFO
