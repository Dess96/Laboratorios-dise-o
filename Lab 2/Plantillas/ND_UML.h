#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include"Agrup.h"
#include<string>

class ND_UML : public Nodo {

private:
	static unsigned int idg;
	unsigned int id;

public:
	ND_UML();
	~ND_UML();
	unsigned int get_id();
	void seleccionar();
};
unsigned int ND_UML::idg = 0;

ND_UML::ND_UML() {
	this->id = ND_UML::idg++;
}

ND_UML::~ND_UML() {

}

unsigned int ND_UML::get_id() {
	return id;
}

void ND_UML::seleccionar() {
	cout << "Seleccionando un nodo de id " << get_id() << endl;
}
#endif // !NODO_UML
