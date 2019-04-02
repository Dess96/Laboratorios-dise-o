#include <iostream>
using namespace std;

#include"Arista.h"
#include"Agregacion.h"
#include"AristaD.h"


int main() {
	AristaD<Agregacion> arr_agr{};
	cout << arr_agr.toString() << endl;
	cin.ignore();
	return 0;
}