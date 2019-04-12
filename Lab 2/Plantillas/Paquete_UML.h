#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup <Paquete_UML> {

private:
	int id;

public:
	Paquete_UML(int nodos, int aristas) {
		while (nodos-- > 0) {
			nodos_uml.push_back(ND_UML{});
		}

		while (aristas-- > 0) {
			aristas_uml.push_back(Arista_UML{});
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
};
#endif // !PAQ

