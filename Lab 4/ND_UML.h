#ifndef NODO_UML
#define NODO_UML

#include "Nodo.h"
#include "Valor.h"
#include <string>

class ND_UML : Nodo {
private:
	string nombre;
	Valor* atributo;

public:
	string get_nombre();
	void set_nombre(string nombre);
	void set_atributo(Valor* atributo);
	Valor* get_atributo();
};

void ND_UML::set_nombre(string nombre) {
	this->nombre = nombre;
}

string ND_UML::get_nombre() {
	return nombre;
}

void ND_UML::set_atributo(Valor* atributo) {

}

Valor* ND_UML::get_atributo() {
	return atributo;
}
#endif // !NODO_UML

