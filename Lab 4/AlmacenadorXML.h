#include "AlmacenadorGrafo.h"
#include <iostream>

using namespace std;

class AlmacenadorXML : public AlmacenadorGrafo {
public:
	AlmacenadorXML();
	~AlmacenadorXML();
	virtual void imprimir_objeto() override;
	virtual string obtener_almacenador() override;
private:
	string almacenador;
};

AlmacenadorXML::AlmacenadorXML() {

}

AlmacenadorXML::~AlmacenadorXML() {

}

void AlmacenadorXML::imprimir_objeto() {
	cout << "Grafo con implementacion XML" << endl;
}

string AlmacenadorXML::obtener_almacenador() {
	return almacenador;
}