#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"

using namespace std;


template <typename T>
class Grafo {

protected:
	T imp;

public:

	
	Grafo() :imp{imp}{
		T{};
		

	}
	~Grafo() {};
	void agregar_arista(Nodo origen, Nodo destino)  {
		imp.agregar_arista(origen,destino);

	}
	void agregar_nodo(Nodo agr_nodo)  {
		imp.agregar_nodo(agr_nodo);

	}
	void eliminar_arista(Nodo origen, Nodo destino)  {
		imp.eliminar_arista(origen,destino);


	}
	void eliminar_nodo(Nodo nd)  {

		imp.eliminar_nodo(nd);

	}
};
#endif // !GRAFO
