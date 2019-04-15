#include"Matriz.h"
#include "Lista.h"
#include"Nodo.h"
#include "TipoGrafo.h"

int main() {
	Matriz m;
	Nodo nd;
	nd.set_id(0);
	Nodo nd2;
	nd2.set_id(1);
	Nodo nd3;
	nd3.set_id(2);

	
	TipoGrafo MatrizAdy{ m };
	MatrizAdy.agregar_arista(nd, nd2);
	MatrizAdy.agregar_nodo(nd);
	MatrizAdy.eliminar_arista(nd, nd2);
	MatrizAdy.eliminar_nodo(nd.get_id());

	Lista lista;
	TipoGrafo ListaAdy{ lista };
	ListaAdy.agregar_arista( nd,nd2 );
	ListaAdy.agregar_nodo( nd );
	ListaAdy.eliminar_arista( nd,nd2 );
	ListaAdy.eliminar_nodo( nd.get_id());





	
	cin.ignore();
	return 0;
}