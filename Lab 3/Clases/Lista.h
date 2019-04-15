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
	}

	~Lista() {

	}
	void crear_grafo() override {
		cout << "Creando grafo por Lista de adyacencias" << endl;
	}

	void agregar_nodo() override {
		cout << " en lista" << endl;
	}
	void agregar_arista() override {
		cout << " en lista" << endl;
	}
	void eliminar_nodo() override {
		cout << " en lista" << endl;
	}
	void eliminar_arista() override {
		cout << " en lista" << endl;
	}


};
