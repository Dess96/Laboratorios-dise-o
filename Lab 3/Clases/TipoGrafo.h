#ifndef TGRAFO
#define TGRAFO

#include "Grafo.h"

class TipoGrafo : public Grafo {

public:
	TipoGrafo(Implementaciones& imp) : Grafo{ imp } {
		imp.crear_grafo();
	}
	~TipoGrafo() {}

	void agregar_arista(Nodo origen, Nodo destino) override {
		cout << "agragando arista";
		imp.agregar_arista();
		
	}
	void agregar_nodo(Nodo agr_nodo) override {
		cout << "agragando nodo";
		imp.agregar_nodo();

	}
	void eliminar_arista(Nodo origen, Nodo destino) override {
		cout << "eliminando arista";
		imp.eliminar_arista();


	}
	void eliminar_nodo(int id) override {
		cout << "eliminando nodo";
		imp.eliminar_nodo();

	}

};


#endif // !GRAFO