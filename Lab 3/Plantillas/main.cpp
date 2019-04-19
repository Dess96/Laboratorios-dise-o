#include"Matriz.h"
#include"Lista.h"
#include"Nodo.h"

int main() {
	Nodo nd;
	nd.set_id(0);
	Nodo nd2;
	nd2.set_id(1);
	Nodo nd3;
	nd3.set_id(2);
	
	Grafo<Lista> grafo;

	grafo.agregar_nodo(nd);
	grafo.agregar_arista(nd, nd2);

	grafo.eliminar_nodo(nd);
	grafo.eliminar_arista(nd, nd2);

	cout << endl;

	Grafo<Matriz> grafo2;

	grafo2.agregar_nodo(nd);
	grafo2.agregar_arista(nd, nd2);

	grafo2.eliminar_nodo(nd);
	grafo2.eliminar_arista(nd, nd2);


	cin.ignore();
	return 0;
}