#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"

using namespace std;

class Grafo {

public:
	Grafo() {};
	~Grafo() {};
	virtual void agregar_arista(Nodo origen, Nodo destino) = 0;
	virtual void agregar_nodo(Nodo agr_nodo) = 0;
	virtual void eliminar_arista(Nodo origen, Nodo destino) = 0;
	virtual void eliminar_nodo(int id) = 0;
};
#endif // !GRAFO
