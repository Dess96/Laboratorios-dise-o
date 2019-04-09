#include"Arista.h"
#include"Agrup.h"

class Arista_UML : public Arista, public Agrup {
private:
	int multiplicidad;
	int rol;

public:
	Arista_UML() {};
	virtual ~Arista_UML() {};
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

	void seleccionar(int id) override {
		cout << "Seleccionando una arista UML" << endl;
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
};