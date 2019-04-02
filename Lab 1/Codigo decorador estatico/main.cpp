#include <iostream>
using namespace std;

#include"Arista.h"
#include"Agregacion.h"
#include"Asociacion.h"
#include"Composicion.h"
#include"Contenido.h"
#include"Dependencia.h"
#include"Generalizacion.h"
#include"Realizacion.h"
#include"Uso.h"
#include"AristaD.h"
#include"AristaND.h"

int main() {
	AristaD<Agregacion> arr_agr{};
	cout << arr_agr.toString() << endl;
	AristaND<Agregacion> arrND_agr{};
	cout << arrND_agr.toString() << endl;
	AristaD<Asociacion> arrD_aso{};
	cout << arrD_aso.toString() << endl;
	AristaND<Composicion> arrND_comp{};
	cout << arrND_comp.toString() << endl;
	AristaD<Contenido> arrD_cont{};
	cout << arrD_cont.toString() << endl;
	AristaND<Dependencia> arrND_dep{};
	cout << arrND_dep.toString() << endl;
	Generalizacion arr_gen{};
	cout << arr_gen.toString() << endl;
	Realizacion arr_re{};
	cout << arr_re.toString() << endl;
	AristaD<Uso> arrD_uso{};
	cout << arrD_uso.toString() << endl;
	cin.ignore();
	return 0;
}