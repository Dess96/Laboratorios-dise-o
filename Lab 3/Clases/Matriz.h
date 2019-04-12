#include"Grafo.h"
#include<vector>
#include<iostream>

using namespace std;

class Matriz : public Grafo {

public:
	Matriz() {
		num_elem = 0;
	}

	~Matriz() {

	}

	void agregar_arista(Nodo origen, Nodo destino) override {
		int ind_origen, ind_dest;
		ind_origen = origen.get_id();
		ind_dest = destino.get_id();
		adyacencias[ind_origen][ind_dest] = 1;
		adyacencias[ind_dest][ind_origen] = 1;
		for (int i = 0; i < adyacencias.size(); i++) {
			for (int j = 0; j < adyacencias.size(); j++) {
				cout << adyacencias[i][j] << " ";
			}
			cout << endl;
		}
	}

	void agregar_nodo(Nodo agr_nodo) override {
		nodos.push_back(agr_nodo);
		num_elem++;
		adyacencias = vector<vector<int> >(num_elem, vector<int>(num_elem));
		for (int i = 0; i < adyacencias.size(); ++i) {
			adyacencias[i][adyacencias.size() - 1] = 0;
		}
		for (int j = 0; j < adyacencias.size(); j++) {
			adyacencias[adyacencias.size() - 1][j] = 0;
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
		for (int i = 0; i < nodos.size(); i++) {
			if (nodos[i].get_id() == id) {
				nodos.erase(nodos.begin() + i);
			}
		}
	}

private:
	vector<vector<int>> adyacencias;
	vector<Nodo> nodos;
	int num_elem;
};