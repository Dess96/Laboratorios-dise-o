#ifndef GROUP
#define GROUP
#include"Agrup.h"
#include"ND_UML.h"
#include"Paquete_UML.h"
#include"Diagrama_UML.h"

using namespace std;

class AgrupDin : public Agrup<AgrupDin> {

private:
	vector<Paquete_UML> paquetes_uml;
	int id;

public:
	AgrupDin() {

	}

	~AgrupDin() {

	}
	void seleccionarD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion" << endl;
			paquetes_uml[l].seleccionar(paquetes_uml[l]);
		}
	}
	void cortarD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion Dinamica" << endl;
			paquetes_uml[l].cortar(paquetes_uml[l]);
		}
	}
	void eliminarD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion Dinamica" << endl;
			paquetes_uml[l].eliminar(paquetes_uml[l]);
		}
	}

	void reducirD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion Dinamica" << endl;
			paquetes_uml[l].reducir(paquetes_uml[l]);
		}
	}

	void aumentarD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion Dinamica" << endl;
			paquetes_uml[l].aumentar(paquetes_uml[l]);
		}
	}

	void dibujarD() {
		for (size_t l = 0; l < paquetes_uml.size(); ++l) {
			cout << "Paquete dentro de Agrupacion Dinamica" << endl;
			paquetes_uml[l].dibujar(paquetes_uml[l]);
		}
	}

	void llenar_paqN(int nodo) {
		nodos_uml.push_back(nodo);
	}
	void llenar_paqA(int arista) {
		aristas_uml.push_back(arista);
	}

	void llenar_paqP(Paquete_UML paq) {
		paquetes_uml.push_back(paq);
	}

	void set_id(int id_grup) {
		id = id_grup;
	}

	int get_id() {
		return id;
	}
};
#endif // !GROUP

