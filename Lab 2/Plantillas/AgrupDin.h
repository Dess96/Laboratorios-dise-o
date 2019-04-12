#ifndef GROUP
#define GROUP
#include"Agrup.h"
#include"ND_UML.h"
#include"Paquete_UML.h"
#include"Diagrama_UML.h"

using namespace std;

class AgrupDin : public Agrup {

private:
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	vector<Paquete_UML*> paquetes_uml;
	int id;

public:
	AgrupDin() {

	}

	~AgrupDin() {

	}

	void set_id(int id_grup) {
		id = id_grup;
	}

	int get_id() {
		return id;
	}
};
#endif // !GROUP

