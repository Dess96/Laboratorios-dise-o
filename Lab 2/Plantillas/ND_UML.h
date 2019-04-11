#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include"Agrup.h"
#include<vector>

class ND_UML : public Nodo, public Agrup <ND_UML> {

private:
	static unsigned int idg;
	unsigned int id;
	vector<ND_UML> nodos_uml;
	
public:
	ND_UML();
	~ND_UML();
	ND_UML* begin() { return this; };
	ND_UML* end() { return this + 1; };
	void seleccionarN(ND_UML& other);
	unsigned int get_id();
};

unsigned int ND_UML::idg = 0;

ND_UML::ND_UML() {
	this->id = ND_UML::idg++;
}

ND_UML::~ND_UML() {

}

void ND_UML::seleccionarN(ND_UML& other) {
	cout << "Se ha seleccionado un nodo con id " << get_id() << endl;
}

unsigned int ND_UML::get_id() {
	return id;
}
#endif // !NODO_UML
