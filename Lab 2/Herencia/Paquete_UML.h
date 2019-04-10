#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup {
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

	}
	void pegar(int id) override {

	}
	void eliminar(int id) override {

	}
	void aumentar(int id) override {

	}
	void reducir(int id) override {

	}
	void dibujar(int id) override {

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

private:
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	vector<Diagrama_UML*> diagramas_uml;
	vector<Paquete_UML*> paquetes_uml;
	int id;
};
#endif // !PAQ

