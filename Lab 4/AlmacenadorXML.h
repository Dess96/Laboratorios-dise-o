#include <iostream>

using namespace std;

class AlmacenadorXML : public AlmacenadorGrafo {
public:
	AlmacenadorXML() {};
	~AlmacenadorXML() {};
	virtual void imprimir_clase(GrafoUML *gr) override;
};

void AlmacenadorXML::imprimir_clase(GrafoUML *gr) {
	vector<ND_UML> vector = gr->get_vector();
	cout << "<Graph> Graph UML" << endl;
	for (size_t i = 0; i < vector.size(); ++i) {
		cout << "\t <Node>" << vector[i].get_nombre() << "</Node>" << endl;
	}
	cout << "</Graph>" << endl;
}