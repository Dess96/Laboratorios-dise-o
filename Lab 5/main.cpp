#include <iostream>
#include <fstream>
#include "GrafoUML.h"
#include "ND_UML.h"
#include "Arista_UML.h"
#include "Composicion.h"
#include "Dependencia.h"
#include "Herencia.h"
#include "AlmacenadorJSON.h"
#include "AlmacenadorXML.h"

using namespace std;

int main() {
	GrafoUML grafo_prueba;
	GrafoUML grafo_prueba2;

	


	/*ND_UML nodo_base, nodo_a, nodo_b, nodo_c, nodo_d;
	Herencia arista_herencia1, arista_herencia2;
	Dependencia arista_dependencia;
	Composicion arista_composicion;
	nodo_base.set_nombre("Class Base");
	nodo_a.set_nombre("Class A");
	nodo_b.set_nombre("Class B");
	nodo_c.set_nombre("Class C");
	nodo_d.set_nombre("Class D");

	grafo_prueba.agregar_clase(nodo_base);
	grafo_prueba.agregar_clase(nodo_a);
	grafo_prueba.agregar_clase(nodo_b);
	grafo_prueba.agregar_clase(nodo_c);
	grafo_prueba.agregar_clase(nodo_d);

	cout << endl;
	arista_herencia1.imprimir();
	arista_herencia2.imprimir();
	arista_composicion.imprimir();
	arista_dependencia.imprimir();
	cout << endl;
	grafo_prueba.agregar_arista(nodo_a, nodo_base, "herencia");
	grafo_prueba.agregar_arista(nodo_b, nodo_base, "herencia");
	grafo_prueba.agregar_arista(nodo_b, nodo_d, "dependencia");
	grafo_prueba.agregar_arista(nodo_c, nodo_a, "composicion");
	cout << endl;*/
	shared_ptr<AlmacenadorGrafo> almacenador = shared_ptr<AlmacenadorGrafo>(new AlmacenadorJSON());
	AlmacenadorGrafo& almacenarJson = *almacenador;
	almacenarJson.imprimir_clase(&grafo_prueba);
	cout << endl;
	shared_ptr<AlmacenadorGrafo> almacenador2 = shared_ptr<AlmacenadorGrafo>(new AlmacenadorXML());
	AlmacenadorGrafo& almacenarXML = *almacenador2;
	almacenarXML.imprimir_clase(&grafo_prueba2);

	cin.ignore();
	return 0;
}