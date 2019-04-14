#include"Arista.h"
#include"Agrup.h"

class Arista_UML : public Arista {
private:
	int multiplicidad;
	int rol;
	static unsigned int idg;
	unsigned int id;

public:
	Arista_UML();
	virtual ~Arista_UML();
	virtual void imprimir() const override {
		cout << "La arista uml";
	}
	void set_rol_inicio(int);
	void set_rol_fin(int);
	int get_rol_inicio();
	int get_rol_fin();
	void set_multiplicidad_inicio(int);
	void set_multiplicidad_fin(int);
	int get_multiplicidad_inicio();
	int get_multiplicidad_fin();
	unsigned int get_id();
	void seleccionar(int id );
	void cortar(int id);
	void eliminar(int id);
	void aumentar(int id);
	void reducir(int id);
	void dibujar(int id);
};

unsigned int Arista_UML::idg = 0;
Arista_UML::Arista_UML() {
	this->id = Arista_UML::idg++;
}

Arista_UML::~Arista_UML() {

}

unsigned int Arista_UML::get_id() {
	return id;
}

void Arista_UML::seleccionar(int arista) {
	cout << "Seleccionando una arista de id " << arista << endl;
}
void Arista_UML::cortar(int arista) {
	cout << "Cortando una arista de id " << arista << endl;
}
void Arista_UML::eliminar(int arista) {
	cout << "Eliminado una arista de id " << arista << endl;
}
void Arista_UML::aumentar(int arista) {
	cout << "Aumentando una arista de id " << arista << endl;
}
void Arista_UML::reducir(int arista) {
	cout << "reduciendo una arista de id " << arista << endl;
}
void Arista_UML::dibujar(int arista) {
	cout << "dinujando una arista de id " << arista << endl;
}