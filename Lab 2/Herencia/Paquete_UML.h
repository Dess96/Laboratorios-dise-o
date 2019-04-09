#ifndef PAQ
#define PAQ
#include"Agrup.h"
#include"ND_UML.h"
#include"Diagrama_UML.h"
class Paquete_UML : public Agrup{
public:
	Paquete_UML() {

	}
	~Paquete_UML() {

	}

	void seleccionar(int id) override {
		cout << "Seleccionando un paquete UML" << endl;
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
	vector<Diagrama_UML*> diagramas_uml;
	vector<Paquete_UML*> paquetes_uml;
};
#endif // !PAQ

