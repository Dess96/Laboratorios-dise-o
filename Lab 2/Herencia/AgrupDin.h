#ifndef GROUP
#define GROUP
#include"Agrup.h"
#include"ND_UML.h"
#include"Paquete_UML.h"
#include"Diagrama_UML.h"

using namespace std;

class AgrupDin : public Agrup {
public:
	AgrupDin() {

	}
	~AgrupDin() {

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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->seleccionar(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->cortar(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->pegar(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->eliminar(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->aumentar(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->reducir(paquetes_uml[l]->get_id());
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

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->dibujar(paquetes_uml[l]->get_id());
		}
	}

	void set_id(int id_grup) {
		id = id_grup;
	}

	int get_id() {
		return id;
	}

	void llenar_paqN(int nodo_id) {
		nodos_uml.push_back(nodo_id);
	}
	void llenar_paqA(int arista_id) {
		aristas_uml.push_back(arista_id);
	}
	
	void llenar_paqP(Paquete_UML* paq) {
		paquetes_uml.push_back(paq);
	}
private:
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	vector<Paquete_UML*> paquetes_uml;
	int id;
};
#endif // !GROUP

