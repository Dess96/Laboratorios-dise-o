#include"Arista_UML.h"

class Agregacion : public Arista_UML {

public:
	Agregacion(){};
	~Agregacion(){};
	virtual void imprimir() const override{
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene agregacion ";
	}
};
