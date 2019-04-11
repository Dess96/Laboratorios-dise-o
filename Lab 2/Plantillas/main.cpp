#include"ND_UML.h"
#include"Diagrama_UML.h"

int main() {
	ND_UML nd;
	Diagrama_UML diag(3);
	
	diag.seleccionar<ND_UML>(nd);
	cin.ignore();
	return 0;
}