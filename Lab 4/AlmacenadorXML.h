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
	cout << "Almacenador XML" << endl;
	cout << "<Class Base>" << endl;
	cout << "	<Node> Class A </Node>" << endl;
	cout << "		<Node> Class C </Node>" << endl;
	cout << "	<Node> Class B </Node>" << endl;
	cout << "		<Node> Class D </Node>" << endl;
	cout << "</Class Base>" << endl;
}