#ifndef List
#define List

#include"Grafo.h"
#include"Nodo.h"
#include<vector>
#include<iostream>

using namespace std;

class Lista : public Grafo, public Implementaciones<Lista> {
private:
	vector<Nodo> nodos;
	int num_elem;

public:
	Lista() {
		num_elem = 0;
		nodos.resize(1);
		cout << "Creando grafo por Lista de adyacencias" << endl;
	}

	~Lista() {

	}
	void agregar_nodos(Nodo agr_nodo) override {
		cout << "agregando nodo en lista" << endl;
	}

	void agregar_aristas(Nodo origen, Nodo destino) override {
		cout << "agregando arista en lista" << endl;
	}

	void eliminar_nodos(int id) override {
		cout << "eliminando nodo en lista" << endl;
	}

	void eliminar_aristas(Nodo origen, Nodo destino) override {
		cout << "eliminando arista en lista" << endl;
	}
};
#endif // !List
