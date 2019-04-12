#include"Grafo.h"
#include<vector>
#include<iostream>

using namespace std;

class Matriz : public Grafo{
	
public:
	Matriz() {

	}

	~Matriz() {

	}

	void agregar_arista(Nodo origen, Nodo destino) override {

	}

	void agregar_nodo(Nodo agr_nodo) override {
		nodos.push_back(agr_nodo);
	}

	void eliminar_arista(int id) override {

	}

	void eliminar_nodo(int id) override {
		for (int i = 0; i < nodos.size(); i++) {
			if (nodos[i].get_id() == id) {
				nodos.erase(nodos.begin()+i);
			}
		}
		for (int i = 0; i < nodos.size(); i++) {
			cout << nodos[i].get_id() << endl;
		}
	}
private:
	vector<vector<int>> adyacencias;
	vector<Nodo> nodos;
};