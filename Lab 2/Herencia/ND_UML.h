#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include"Agrup.h"
#include<string>

class ND_UML : public Nodo, public Agrup {

private:
	string nombre;
	int tipo;

public:
	string get_nombre();
	void set_nombre(string nombre);
};
#endif // !NODO_UML
