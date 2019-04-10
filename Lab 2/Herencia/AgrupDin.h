#ifndef GROUP
#define GROUP
#include"Agrup.h"
#include"ND_UML.h"
#include"Paquete_UML.h"
#include"Diagrama_UML.h"

using namespace std;

class AgrupDin : public Agrup {
public:
	AgrupDin() {

	}
	~AgrupDin() {

	}

	void seleccionar(int id) override {
		cout << "Selccionando una agrupacion dinamica" << endl;
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
	vector<int> nodos_uml;
	vector<int> aristas_uml;
	vector<int> paquetes_uml;
};
#endif // !GROUP

