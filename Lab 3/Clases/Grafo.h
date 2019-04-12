#ifndef GRAFO
#define GRAFO

#include<vector>
#include"Nodo.h"

using namespace std;

class Grafo {

public:
	Grafo();
	~Grafo();
	void agregar_arista(Nodo origen, Nodo destino);
	void agregar_nodo(Nodo agr_nodo);
	void eliminar_arista(int id);
	void eliminar_nodo(int id);
};
#endif // !GRAFO
