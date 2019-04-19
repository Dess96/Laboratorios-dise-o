#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"
#include "Implementaciones.h"

using namespace std;

class Grafo {
protected:
	Implementaciones& imp;

public:
	Grafo(Implementaciones& imp) : imp{ imp } {}
	
	~Grafo() {};
	void agregar_arista(Nodo origen, Nodo destino)  {
		imp.agregar_arista();

	}
	void agregar_nodo(Nodo agr_nodo)  {
		imp.agregar_nodo();

	}
	void eliminar_arista(Nodo origen, Nodo destino)  {
		imp.eliminar_arista();


	}
	void eliminar_nodo(int id)  {

		imp.eliminar_nodo();

	}
};
#endif // !GRAFO
