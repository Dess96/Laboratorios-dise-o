#include "Arista_UML.h"
#include "ND_UML.h"
#include "Diagrama_UML.h"
#include "Paquete_UML.h"
#include "AgrupDin.h"
int main() {
	Arista_UML ar;
	ND_UML nd;
	Diagrama_UML diag;
	Paquete_UML paq;
	AgrupDin agrupD;
	ar.seleccionar(1);
	nd.seleccionar(2);
	diag.seleccionar(3);
	paq.seleccionar(4);
	agrupD.seleccionar(5);
	cin.ignore();
	return 0;
}