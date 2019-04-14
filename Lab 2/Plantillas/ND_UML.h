#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include"Agrup.h"
#include<string>

class ND_UML : public Nodo {

private:
	static unsigned int idg;
	unsigned int id;

public:
	ND_UML();
	~ND_UML();
	unsigned int get_id();
	void seleccionar(int id);
	void cortar(int id);
	void eliminar(int id);
	void aumentar(int id);
	void reducir(int id);
	void dibujar(int id);
};
unsigned int ND_UML::idg = 0;

ND_UML::ND_UML() {
	this->id = ND_UML::idg++;
}

ND_UML::~ND_UML() {

}

unsigned int ND_UML::get_id() {
	return id;
}

void ND_UML::seleccionar(int id){
	cout << "Seleccionando un nodo de id " << id << endl;
}
void ND_UML::cortar(int id) {
	cout << "Cortando un nodo de id " << id << endl;
}
void ND_UML::eliminar(int id) {
	cout << "Cortando un nodo de id " << id << endl;
}
void ND_UML::aumentar(int id) {
	cout << "Cortando un nodo de id " << id << endl;
}
void ND_UML::reducir(int id) {
	cout << "Cortando un nodo de id " << id << endl;
}
void ND_UML::dibujar(int id) {
	cout << "dibujando un nodo de id " << id << endl;
}

#endif // !NODO_UML
