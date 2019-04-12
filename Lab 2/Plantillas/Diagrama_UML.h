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
	Diagrama_UML(int nodos, int aristas) {
		while (nodos-- > 0) {
			nodos_uml.push_back(ND_UML{});
		}

		while (aristas-- > 0) {
			aristas_uml.push_back(Arista_UML{});
		}
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
};
#endif // !DIAGRA

