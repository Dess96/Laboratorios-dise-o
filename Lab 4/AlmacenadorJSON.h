#include "AlmacenadorGrafo.h"
#include <iostream>

using namespace std;

class AlmacenadorJSON : public AlmacenadorGrafo {
public:
	AlmacenadorJSON() {};
	~AlmacenadorJSON() {};
	virtual void imprimir_clase(GrafoUML *gr) override;
};

void AlmacenadorJSON::imprimir_clase(GrafoUML *gr) {
	vector<ND_UML> vector = gr->get_vector();
	cout << "Graph UML {" << endl;
	cout << "\t[" << endl;
	for (size_t i = 0; i < vector.size(); ++i) {
		cout << "\t Name:" << vector[i].get_nombre() << "," << endl;
	}
	cout << "\t]" << endl;
	cout << "}" << endl;
}