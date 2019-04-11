#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup {

private:
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	vector<Diagrama_UML*> diagramas_uml;
	vector<Paquete_UML*> paquetes_uml;
	int id;

public:
	Paquete_UML() {
		
	}

	~Paquete_UML() {

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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->seleccionar(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->cortar(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->pegar(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->eliminar(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->aumentar(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->reducir(diagramas_uml[k]->get_id());
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

		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			diagramas_uml[k]->dibujar(diagramas_uml[k]->get_id());
		}

		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			paquetes_uml[l]->dibujar(paquetes_uml[l]->get_id());
		}
	}

	void set_id(int id_p) {
		id = id_p;
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
	void llenar_paqD(Diagrama_UML* diag) {
		diagramas_uml.push_back(diag);
	}
	void llenar_paqP(Paquete_UML* paq) {
		paquetes_uml.push_back(paq);
	}
};
#endif // !PAQ

