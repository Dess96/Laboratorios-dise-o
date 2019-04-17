#include"Implementaciones.h"
#include"Grafo.h"
#include"Nodo.h"
#include<vector>
#include<iostream>
#define MAX 100

using namespace std;

class Matriz : public Grafo, public Implementaciones<Matriz> {
private:
	vector<vector<int>> adyacencias;
	vector<Nodo> nodos;
	int num_elem; 

public:
	Matriz() {
		num_elem = 0;
		adyacencias.resize(MAX, vector<int>(MAX));
		cout << "Creando grafo por Matriz de adyacencias" << endl;
	}

	~Matriz() {

	}
	void agregar_nodos(Nodo agr_nodo) override {
		cout << "agregando nodo en matriz" << endl;
	}

	void agregar_aristas(Nodo origen, Nodo destino) override {
		cout << "agregando arista en matriz" << endl;
	}

	void eliminar_nodos(int id) override {
		cout << "eliminando nodo en matriz" << endl;
	}

	void eliminar_aristas(Nodo origen, Nodo destino) override {
		cout << "eliminando arista en matriz" << endl;
	}
};