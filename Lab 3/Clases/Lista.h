#include"Implementaciones.h"
#include "Nodo.h"
#include<vector>
#include<iostream>
#define MAX 100

using namespace std;

class Lista : public Implementaciones {
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
	void agregar_nodo() override {
		cout << "agregando nodo en lista" << endl;
	}
	void agregar_arista() override {
		cout << "agregando arista en lista" << endl;
	}
	void eliminar_nodo() override {
		cout << "eliminando nodo en lista" << endl;
	}
	void eliminar_arista() override {
		cout << "eliminando arista en lista" << endl;
	}


};
