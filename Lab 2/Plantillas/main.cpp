#include"ND_UML.h"
#include"Diagrama_UML.h"
#include"Paquete_UML.h"
#include "AgrupDin.h"

int main() {
/*	Diagrama_UML diag(3, 2);
	cout << "Seleccionando diagrama que contiene tres nodos y dos aristas" << endl;
	cout << endl;
	diag.seleccionar(diag);*/
	Paquete_UML paq,paq2;
	ND_UML nd1{},nd2{},nd3{},nd4{},nd5{},nd6{}, nd7{}, nd8{}, nd9{}, nd10{};
	Arista_UML ar1{}, ar2{}, ar3{}, ar4{}, ar5{};
	Diagrama_UML diag1;
	cout << "\n\n============== Diagrama =====================\n" << endl;
	cout << "Seleccionando diagrama que contiene tres nodos y tres aristas"<< endl ;
	diag1.llenar_diagN(nd6.get_id());
	diag1.llenar_diagN(nd7.get_id());
	diag1.llenar_diagN(nd8.get_id());
	diag1.llenar_diagA(ar3.get_id());
	diag1.llenar_diagA(ar4.get_id());
	diag1.llenar_diagA(ar5.get_id());

	diag1.seleccionar(diag1);

	cout << "\n\nDibujando diagrama que contiene tres nodos y tres aristas" << endl;
	diag1.dibujar(diag1);
	cout << "\n\n============== Paquete =====================\n" << endl;

	paq.llenar_paqN(nd1.get_id());
	paq.llenar_paqN(nd2.get_id());
	paq.llenar_paqN(nd3.get_id());
	paq.llenar_paqN(nd4.get_id());
	paq.llenar_paqN(nd5.get_id());
	paq.llenar_paqA(ar1.get_id());
	paq.llenar_paqA(ar2.get_id());

	cout << endl;
	cout << "Seleccionando paquete que contiene cinco nodos y dos aristas" << endl;
	cout << endl;
	paq.seleccionar(paq);

	cout << "\n\n";
	cout << "Cortando paquete que contiene cinco nodos y dos aristas" << endl;
	paq.cortar(paq);
	paq.llenar_paqD(diag1);

	cout << "\n\n==============Agrupacion Dinamica=====================\n" << endl;
	ND_UML nda{}, ndb{}, ndc{};
	Arista_UML ara{}, arb{};
	Diagrama_UML diag2;
	AgrupDin agr;
	
	
	agr.llenar_paqP(paq);
	agr.llenar_paqN(nda.get_id());
	agr.llenar_paqN(ndb.get_id());
	agr.llenar_paqN(ndc.get_id());
	agr.llenar_paqA(ara.get_id());
	agr.llenar_paqA(arb.get_id());


	cout << "Seleccionando una Agrupacion Dinamica" << endl;

	agr.seleccionar(agr);


	cin.ignore();
	return 0;
}