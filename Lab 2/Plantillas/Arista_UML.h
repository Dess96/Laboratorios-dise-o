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
	void seleccionar();
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

void Arista_UML::seleccionar() {
	cout << "Seleccionando una arista de id " << get_id() << endl;
}