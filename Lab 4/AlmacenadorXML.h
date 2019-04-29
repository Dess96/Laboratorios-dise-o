#include <iostream>

using namespace std;

class AlmacenadorXML : public AlmacenadorGrafo {
public:
	AlmacenadorXML() {};
	~AlmacenadorXML() {};
	virtual void imprimir_objeto(GrafoUML *gr) override;

private:
	string almacenador;
};

void AlmacenadorXML::imprimir_objeto(GrafoUML *gr) {
	for (int i = 0; i < gr->nodos.size(); i++) {
		cout << gr->nodos[i].get_nombre() << endl;
	}
}