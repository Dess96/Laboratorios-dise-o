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
	}

	~Matriz() {

	}
	void crear_grafo() override {
		cout << "Creando grafo por Matriz de adyacencias" << endl;
	}

	void agregar_nodo() override {
		cout << " en matriz" << endl;
	}
	void agregar_arista() override {
		cout << " en matriz" << endl;
	}
	void eliminar_nodo() override {
		cout << " en matriz" << endl;
	}
	void eliminar_arista() override {
		cout << " en matriz" << endl;
	}

	/*void agregar_arista(Nodo origen, Nodo destino) override {
		int ind_origen, ind_dest;
		ind_origen = origen.get_id();
		ind_dest = destino.get_id();
		adyacencias[ind_origen][ind_dest] = 1;
		adyacencias[ind_dest][ind_origen] = 1;
		cout << "arista" << endl;
		for (int i = 0; i < num_elem; i++) {
			for (int j = 0; j < num_elem; j++) {
				cout << adyacencias[i][j] << " ";
			}
			cout << endl;
		}
		cout << "agregando arista" << endl; 
	}

	void agregar_nodo(Nodo agr_nodo) override {
		nodos.push_back(agr_nodo);
		num_elem++;
		for (int i = 0; i < num_elem; ++i) {
			adyacencias[i][num_elem - 1] = 0;
		}
		for (int j = 0; j < num_elem; j++) {
			adyacencias[num_elem - 1][j] = 0;
		}
		cout << "agrega" << endl;
		for (int i = 0; i < num_elem; i++) {
			for (int j = 0; j < num_elem; j++) {
				cout << adyacencias[i][j] << " ";
			}
			cout << endl;
		}
	}

	void eliminar_arista(Nodo origen, Nodo destino) override {
		int ind_origen, ind_dest;
		ind_origen = origen.get_id();
		ind_dest = destino.get_id();
		adyacencias[ind_origen][ind_dest] = 0;
		adyacencias[ind_dest][ind_origen] = 0;
	}

	void eliminar_nodo(int id) override {
		for (int i = 0; i < nodos.size(); ++i) {
			if (nodos[i].get_id() == id) {
				nodos.erase(nodos.begin() + i);
			}
		}
		num_elem--;
	}
	*/

};