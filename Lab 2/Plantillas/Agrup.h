#ifndef OPER
#define OPER

#include<vector>
#include"Arista_UML.h"
#include"ND_UML.h"
class ND_UML;
class Arista_UML;

template <typename T>
class Agrup {
public:
	Agrup();
	~Agrup();
	//Operaciones 
	void seleccionar(T& tipo) {
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nodos_uml[i].seleccionar();
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			aristas_uml[j].seleccionar();
		}
		tipo.seleccionarD();
	}
/*	void cortar(int id);
	void pegar(int id);
	void eliminar(int id);
	void aumentar(int id);
	void reducir(int id);
	void dibujar(int id); */
	vector<ND_UML> nodos_uml;
	vector<Arista_UML> aristas_uml;
};

template <typename T>
Agrup< T >::Agrup() {

}

template <typename T>
Agrup< T >::~Agrup() {

}


#endif // !OPER
