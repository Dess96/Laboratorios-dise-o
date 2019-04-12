#include"Matriz.h"
#include"Nodo.h"

int main() {
	Matriz m;
	Nodo nd;
	nd.set_id(1);
	Nodo nd2;
	nd2.set_id(2);
	Nodo nd3;
	nd3.set_id(3);
	m.agregar_nodo(nd);
	m.agregar_nodo(nd2);
	m.agregar_nodo(nd3);
	m.eliminar_nodo(2);
	cin.ignore();
	return 0;
}