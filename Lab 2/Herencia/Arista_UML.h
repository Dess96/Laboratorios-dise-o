#include"Arista.h"

class Arista_UML : public Arista {
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
	//Operaciones 
	void seleccionar_arista();
	void cortar_arista();
	void pegar_arista();
	void eliminar_arista();
	void aumentar_arista();
	void reducir_arista();
	void dibujar_arista();
};