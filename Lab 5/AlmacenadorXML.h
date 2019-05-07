#include <iostream>

using namespace std;

class AlmacenadorXML : public AlmacenadorGrafo {
public:
	AlmacenadorXML() {};
	~AlmacenadorXML() {};
	virtual void imprimir_clase(GrafoUML *gr) override;
};

void AlmacenadorXML::imprimir_clase(GrafoUML *gr) {
	string s;
	ifstream of1;
	ND_UML nodo_base, nodo_a, nodo_b, nodo_c, nodo_d;
	Herencia arista_herencia1, arista_herencia2;
	Dependencia arista_dependencia;
	Composicion arista_composicion;
	of1.open("grafoUML.txt");


	while (getline(of1, s)) {
		istringstream iss(s);
		string token;

		if (s[0] == 'n') {
			ND_UML x;
			getline(iss, token, ' ');
			getline(iss, token, ' ');
			x.set_nombre(token);
			gr->agregar_clase(x);
		}
		else if (s[0] == 'h') {
			Herencia h;
			getline(iss, token, ' ');
			getline(iss, token, ' ');
			gr->agregar_arista(nodo_a, nodo_b, "Herencia");

		}
		else if (s[0] == 'c') {
			Composicion h;
			getline(iss, token, ' ');
			getline(iss, token, ' ');
			gr->agregar_arista(nodo_a, nodo_b, "Composicion");
			;

		}
		else if (s[0] == 'd') {
			Dependencia h;
			getline(iss, token, ' ');
			getline(iss, token, ' ');
			gr->agregar_arista(nodo_a, nodo_b, "Dependencia");

		}


	}
	for (int i = 0; i < gr->get_vector().size(); ++i) {
		cout << gr->get_vector()[i].get_nombre() << endl;

	}
}