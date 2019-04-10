#include "Arista_UML.h"
#include "ND_UML.h"
#include "Diagrama_UML.h"
#include "Paquete_UML.h"
#include "AgrupDin.h"
int main() {
	Arista_UML ar, ar2, ar3;
	ND_UML nd, nd2, nd3, nd4;
	nd.set_id(1);
	nd2.set_id(2);
	nd3.set_id(3);
	nd4.set_id(4);
	ar.set_id(1);
	ar2.set_id(2);
	ar3.set_id(3);
	Diagrama_UML diag;
	diag.set_id(1);

	diag.llenar_diagN(nd.get_id());
	diag.llenar_diagN(nd2.get_id());
	diag.llenar_diagN(nd3.get_id());
	diag.llenar_diagN(nd4.get_id());

	diag.llenar_diagA(ar.get_id());
	diag.llenar_diagA(ar2.get_id());
	diag.llenar_diagA(ar3.get_id());

	cout << "Seleccionar diagrama" << endl;
	cout << endl;
	diag.seleccionar(diag.get_id());

	Paquete_UML paq;
	paq.set_id(1);
	ND_UML nd5, nd6;
	nd5.set_id(5);
	nd6.set_id(6);
	Arista_UML ar4;
	ar4.set_id(4);

	paq.llenar_paqA(ar4.get_id());
	paq.llenar_paqN(nd5.get_id());
	paq.llenar_paqN(nd6.get_id());
	paq.llenar_paqD(diag.get_id());
	
	cout << endl;
	cout << "Seleccionar paquete" << endl;
	cout << endl;
	paq.seleccionar(paq.get_id());

	
	cin.ignore();
	return 0;
}