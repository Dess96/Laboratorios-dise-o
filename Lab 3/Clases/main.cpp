#include"Matriz.h"
#include"Nodo.h"

int main() {
	Matriz m;
	Nodo nd;
	nd.set_id(0);
	Nodo nd2;
	nd2.set_id(1);
	Nodo nd3;
	nd3.set_id(2);
	m.agregar_nodo(nd);
	m.agregar_nodo(nd2);
	m.agregar_nodo(nd3);
	m.agregar_arista(nd, nd2);
	m.eliminar_nodo(nd2.get_id());
	cin.ignore();
	return 0;
}