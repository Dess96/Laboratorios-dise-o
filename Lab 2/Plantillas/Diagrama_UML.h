#ifndef DIAGRA
#define DIAGRA
#include"Agrup.h"
#include"ND_UML.h"
#include<vector>
using namespace std;

class Diagrama_UML : public Agrup <Diagrama_UML> {

private:
	int id;

public:
	Diagrama_UML() {
	}

	~Diagrama_UML() {

	}

	void set_id(int id_diag) {
		id = id_diag;
	}

	int get_id() {
		return id;
	}

	void seleccionarD() {
	//	cout << "Seleccionando un diagrama de id " << get_id() << endl;
	}
	void cortarD() {
		//	cout << "Seleccionando un diagrama de id " << get_id() << endl;
	}

	void pegarD() {

	}
	void eliminarD() {

	}
	void aumentarD() {

	}
	void reducirD() {

	}
	void dibujarD() {

	}

	void llenar_diagN(int nodo_id) {
		nodos_uml.push_back(nodo_id);
	}
	void llenar_diagA(int arista_id) {
		aristas_uml.push_back(arista_id);
	}
};
#endif // !DIAGRA

