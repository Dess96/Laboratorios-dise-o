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
	ND_UML() {

	}
	string get_nombre();

	void seleccionar(int id) override {
		cout << "Seleccionando un nodo UML con id " << id  << endl;
	}
	void cortar(int id) override {
		cout << "Cortando un nodo UML con id " << id << endl;
	}
	void pegar(int id) override {
		cout << "Pegando un nodo UML con id " << id << endl;
	}
	void eliminar(int id) override {
		cout << "Eliminar un nodo UML con id " << id << endl;
	}
	void aumentar(int id) override {
		cout << "Aumentando un nodo UML con id " << id << endl;
	}
	void reducir(int id) override {
		cout << "Reduciendo un nodo UML con id " << id << endl;
	}
	void dibujar(int id) override {
		cout << "Dibujando un nodo UML con id " << id << endl;
	}
};
#endif // !NODO_UML
