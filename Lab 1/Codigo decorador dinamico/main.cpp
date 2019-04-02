#include"Arista.h"
#include"Agregacion.h"
#include"Asociacion.h"
#include"Composicion.h"
#include"Dependencia.h"
#include"Contenido.h"
#include"Uso.h"
#include"Generalizacion.h"
#include"Realizacion.h"
#include"AristaND.h"
#include"AristaD.h"
#include<iostream>

using namespace std;

int main() {
	Agregacion arr_agreD;
	AristaD aristaD(arr_agreD);
	aristaD.imprimir();

	Agregacion arr_agreND;
	AristaND aristaND(arr_agreND);
	aristaND.imprimir();

	Asociacion arr_asoD;
	AristaD aristaDS(arr_asoD);
	aristaDS.imprimir();

	Composicion arr_compND;
	AristaND aristaNDC(arr_compND);
	aristaNDC.imprimir();

	Dependencia arr_depD;
	AristaD aristaDepD(arr_depD);
	aristaDepD.imprimir();

	Contenido arr_contND;
	AristaND aristaContND(arr_contND);
	aristaContND.imprimir();

	Uso arr_usoD;
	AristaD aristaUsoD(arr_usoD);
	aristaUsoD.imprimir();

	Generalizacion arr_gen;
	arr_gen.imprimir();

	Realizacion arr_rea;
	arr_rea.imprimir();

	cin.ignore();
	return 0;
}
