#pragma once
#ifndef GRAF_UML
#define GRAF_UML
#include "Grafo.h"
#include "ND_UML.h"
#include <vector>

class GrafoUML {
private:
	Grafo grafo;
	vector<ND_UML> vector_nodos;
	
public:
	void agregar_clase(ND_UML nodo_clase);
	void agregar_paquete(ND_UML nodo_paq);
	void agregar_objeto(ND_UML nodo_obj);
	void eliminar_clase(int id);
	void eliminar_paquete(int id);
	void eliminar_objeto(int id);
	void agregar_arista(ND_UML inicio, ND_UML fin, string tipo_arista);
	vector<ND_UML> get_vector();
};
#endif // !GRAF_UML

void GrafoUML::agregar_clase(ND_UML nodo_clase) {
	cout << "Agregada la clase " << nodo_clase.get_nombre() << " al diagrama UML" << endl;
	vector_nodos.push_back(nodo_clase);
}

void GrafoUML::agregar_arista(ND_UML inicio, ND_UML fin, string tipo_arista) {
	cout << "Creando arista " << tipo_arista << " desde " << inicio.get_nombre() << " hasta " << fin.get_nombre() << endl;
}

vector<ND_UML>GrafoUML::get_vector () {
	return vector_nodos;
}