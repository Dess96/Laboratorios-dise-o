#ifndef NODO_UML
#define NODO_UML

#include "Nodo.h"
#include <string>

class ND_UML : Nodo {
private:
	string nombre;

public:
	string get_nombre();
	void set_nombre(string nombre);
};

void ND_UML::set_nombre(string nombre) {
	this->nombre = nombre;
}

string ND_UML::get_nombre() {
	return nombre;
}
#endif // !NODO_UML

