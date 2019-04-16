#ifndef TGRAFO
#define TGRAFO

#include "Grafo.h"

class TipoGrafo : public Grafo {

public:
	TipoGrafo(Implementaciones& imp) : Grafo{ imp } {
	}
	~TipoGrafo() {}

	void agregar_arista(Nodo origen, Nodo destino) override {
		imp.agregar_arista();
		
	}
	void agregar_nodo(Nodo agr_nodo) override {
		imp.agregar_nodo();

	}
	void eliminar_arista(Nodo origen, Nodo destino) override {
		imp.eliminar_arista();


	}
	void eliminar_nodo(int id) override {

		imp.eliminar_nodo();

	}

};


#endif // !GRAFO