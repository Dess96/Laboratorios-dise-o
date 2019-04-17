#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"

using namespace std;

class Grafo {

public:
	
	~Grafo() {};
	virtual void agregar_aristas(Nodo origen, Nodo destino) = 0;
	virtual void agregar_nodos(Nodo agr_nodo) = 0;
	virtual void eliminar_aristas(Nodo origen, Nodo destino) = 0;
	virtual void eliminar_nodos(int id) = 0;
};
#endif // !GRAFO
