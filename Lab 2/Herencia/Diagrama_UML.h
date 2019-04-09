#ifndef DIAGRA
#define DIAGRA
#include"Agrup.h"
#include"ND_UML.h"
#include<vector>
using namespace std;

class Diagrama_UML : public Agrup {
public:
	Diagrama_UML() {
	}
	~Diagrama_UML() {

	}

	void seleccionar(int id) override {
		cout << "Seleccionando un diagrama UML" << endl;
	}
	void cortar(int id) override {

	}
	void pegar(int id) override {

	}
	void eliminar(int id) override {

	}
	void aumentar(int id) override {

	}
	void reducir(int id) override {

	}
	void dibujar(int id) override {

	}
private:
	vector<ND_UML*> nodos_uml;
	vector<Arista_UML*> aristas_uml;
};
#endif // !DIAGRA

