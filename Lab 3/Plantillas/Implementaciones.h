#include"Nodo.h"

class Nodo;

template <typename T>
class Implementaciones {

public:
	Implementaciones(){};
	~Implementaciones() {};
	void agregar_nodo(T& tipo_grafo) {
		Nodo nd1;
		tipo_grafo.agregar_nodos(nd1);
	}
	
	void agregar_arista(T& tipo_grafo) {
		Nodo nd1, nd2;
		tipo_grafo.agregar_aristas(nd1, nd2);
	}

	void eliminar_nodo(T& tipo_grafo) {
		tipo_grafo.eliminar_nodos(0);
	}

	void eliminar_arista(T& tipo_grafo) {
		Nodo nd1, nd2;
		tipo_grafo.eliminar_aristas(nd1, nd2);
	}
};
