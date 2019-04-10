#ifndef DIAGRA
#define DIAGRA
#include"Agrup.h"
#include"ND_UML.h"
#include<vector>
using namespace std;

class Diagrama_UML : public Agrup {
public:
	Diagrama_UML() {
		
	}
	~Diagrama_UML() {

	}

	void seleccionar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.seleccionar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.seleccionar(aristas_uml[j]);
		}
	}
	void cortar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.cortar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.cortar(aristas_uml[j]);
		}
	}
	void pegar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.pegar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.pegar(aristas_uml[j]);
		}
	}

	void eliminar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.eliminar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.eliminar(aristas_uml[j]);
		}
	}

	void aumentar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.aumentar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.aumentar(aristas_uml[j]);
		}
	}

	void reducir(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.reducir(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.reducir(aristas_uml[j]);
		}
	}

	void dibujar(int id) override {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.dibujar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.dibujar(aristas_uml[j]);
		}
	}

	void llenar_diagN(int nodo_id) {
		nodos_uml.push_back(nodo_id);
	}
	void llenar_diagA(int arista_id) {
		aristas_uml.push_back(arista_id);
	}

	void set_id(int id_diag) {
		id = id_diag;
	}

	int get_id() {
		return id;
	}
private:
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	int id;
};
#endif // !DIAGRA

