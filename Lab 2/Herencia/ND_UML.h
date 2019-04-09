#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include"Agrup.h"
#include<string>

class ND_UML : public Nodo, public Agrup {

private:
	string nombre;
	int tipo;

public:
	string get_nombre();

	void seleccionar(int id) override;
	void cortar(int id) override;
	void pegar(int id) override;
	void eliminar(int id) override;
	void aumentar(int id) override;
	void reducir(int id) override;
	void dibujar(int id) override; //?
};
#endif // !NODO_UML
