#include"Arista.h"

class Arista_UML : public Arista {
public:
	Arista_UML() {};
	virtual ~Arista_UML(){};
	virtual void imprimir() const override{
		cout << "Se ha creado una arista uml";
	}
	void set_rol_inicio(int);
	void set_rol_fin(int);
	int get_rol_inicio();
	int get_rol_fin();
	void set_multiplicidad_inicio(int);
	void set_multiplicidad_fin(int);
	int get_multiplicidad_inicio();
	int get_multiplicidad_fin();

private:
	int multiplicidad;
	int rol;
};
