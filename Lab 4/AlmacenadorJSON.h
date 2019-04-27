#include "AlmacenadorGrafo.h"
#include <iostream>

using namespace std;

class AlmacenadorJSON : public AlmacenadorGrafo {
public:
	AlmacenadorJSON();
	~AlmacenadorJSON();
	virtual void imprimir_objeto() override;
	virtual string obtener_almacenador() override;
private:
	string almacenador;
};

AlmacenadorJSON::AlmacenadorJSON() {

}

AlmacenadorJSON::~AlmacenadorJSON() {

}

void AlmacenadorJSON::imprimir_objeto() {
	cout << "Grafo con implementacion XML" << endl;
}

string AlmacenadorJSON::obtener_almacenador() {
	return almacenador;
}
