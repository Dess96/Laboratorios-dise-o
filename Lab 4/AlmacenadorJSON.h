#include "AlmacenadorGrafo.h"
#include <iostream>

using namespace std;

class AlmacenadorJSON : public AlmacenadorGrafo {
public:
	AlmacenadorJSON() {};
	~AlmacenadorJSON() {};
	virtual void imprimir_objeto(GrafoUML *gr) override;

private:
	string almacenador;
};

void AlmacenadorJSON::imprimir_objeto(GrafoUML *gr) {
	
}
