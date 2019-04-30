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
	cout << "Almacenador JSON" << endl;
	cout << "Class Base {" << endl;
	cout << "	Class A {" << endl;
	cout << "		Class C" << endl;
	cout << "	}" << endl;
	cout << "	Class B {" << endl;
	cout << "		Class D" << endl;
	cout << "	}" << endl;
	cout << "}" << endl;
}
