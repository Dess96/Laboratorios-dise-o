#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup <Paquete_UML> {

private:
	int id;

public:
	Paquete_UML() {
		/*while (nodos-- > 0) {
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
		}*/
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
	void cortarD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].cortar(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].cortar(paquetes_uml[l]);
		}
	}
	void eliminarD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].eliminar(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].eliminar(paquetes_uml[l]);
		}
	}

	void reducirD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].reducir(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].reducir(paquetes_uml[l]);
		}
	}

	void aumentarD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].aumentar(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].aumentar(paquetes_uml[l]);
		}
	}

	void dibujarD() {
		for (size_t k = 0; k < diagramas_uml.size(); ++k) {
			cout << "Diagrama dentro de paquete" << endl;
			diagramas_uml[k].dibujar(diagramas_uml[k]);
		}
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de paquete" << endl;
			paquetes_uml[l].dibujar(paquetes_uml[l]);
		}
	}

	void llenar_paqN(int nodo_id) {
		nodos_uml.push_back(nodo_id);
	}
	void llenar_paqA(int arista_id) {
		aristas_uml.push_back(arista_id);
	}
	void llenar_paqD(Diagrama_UML diag) {
		diagramas_uml.push_back(diag);
	}
	void llenar_paqP(Paquete_UML paq) {
		paquetes_uml.push_back(paq);
	}
private:
	vector<Diagrama_UML> diagramas_uml;
	vector<Paquete_UML> paquetes_uml;
};
#endif // !PAQ

