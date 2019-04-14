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
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.seleccionar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.seleccionar(aristas_uml[j]);
		}
		tipo.seleccionarD();
	}
	void cortar(T& tipo) {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.cortar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.cortar(aristas_uml[j]);
		}
		tipo.cortarD();
	}
	void eliminar(T& tipo) {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.eliminar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.eliminar(aristas_uml[j]);
		}
		tipo.eliminarD();
	}
	void reducir(T& tipo) {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.reducir(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.reducir(aristas_uml[j]);
		}
		tipo.reducirD();
	}
	void aumentar(T& tipo) {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.aumentar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.aumentar(aristas_uml[j]);
		}
		tipo.aumentarD();
	}
	void dibujar(T& tipo) {
		ND_UML nd;
		Arista_UML ar;
		for (size_t i = 0; i < nodos_uml.size(); ++i) {
			nd.dibujar(nodos_uml[i]);
		}
		for (size_t j = 0; j < aristas_uml.size(); ++j) {
			ar.dibujar(aristas_uml[j]);
		}
		tipo.dibujarD();
	}
/*	void cortar(int id);
	void pegar(int id);
	void eliminar(int id);
	void aumentar(int id);
	void reducir(int id);
	void dibujar(int id); */
	vector<int> nodos_uml;
	vector<int> aristas_uml;
};

template <typename T>
Agrup< T >::Agrup() {

}

template <typename T>
Agrup< T >::~Agrup() {

}


#endif // !OPER
