#include"ND_UML.h"
#include"Diagrama_UML.h"
#include"Paquete_UML.h"

int main() {
	Diagrama_UML diag(3, 2);
	cout << "Seleccionando diagrama que contiene tres nodos y dos aristas" << endl;
	cout << endl;
	diag.seleccionar(diag);
	Paquete_UML paq(5, 2);
	cout << endl;
	cout << "Seleccionando paquete que contiene cinco nodos y dos aristas" << endl;
	cout << endl;
	paq.seleccionar(paq);
	cin.ignore();
	return 0;
}