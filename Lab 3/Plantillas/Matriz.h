#include"Implementaciones.h"
#include "Nodo.h"
#include<vector>
#include<iostream>
#define MAX 100

using namespace std;

class Matriz : public Implementaciones {
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
	void agregar_nodo(Nodo nd) override  {
		cout << "agregando nodo en matriz" << endl;
	}
	void agregar_arista(Nodo nd,Nodo nd2) override  {
		cout << "agregando arista en matriz" << endl;
	}
	void eliminar_nodo(Nodo nd) override {
		cout << "eliminando nodo en matriz" << endl;
	}
	void eliminar_arista(Nodo nd, Nodo nd2) override  {
		cout << "eliminando arista en matriz" << endl;
	}

};