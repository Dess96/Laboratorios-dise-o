#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup <Paquete_UML> {

private:
	int id;

public:
	Paquete_UML(int nodos, int aristas, int diagramas, int paquetes) {
		while (nodos-- > 0) {
			nodos_uml.push_back(ND_UML{});
		}

		while (aristas-- > 0) {
			aristas_uml.push_back(Arista_UML{});
		}

		while (diagramas-- > 0) {
			diagramas_uml.push_back(Diagrama_UML{3, 4});
		}

		while (paquetes-- > 0) {
			paquetes_uml.push_back(Paquete_UML{ 2, 2, 0, 0 });
		}
	}

	~Paquete_UML() {

	}

	void set_id(int id_p) {
		id = id_p;
	}

	int get_id() {
		return id;
	}

	void seleccionarD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].seleccionar(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].seleccionar(paquetes_uml[l]);
		}
	}
private:
	vector<Diagrama_UML> diagramas_uml;
	vector<Paquete_UML> paquetes_uml;
};
#endif // !PAQ

