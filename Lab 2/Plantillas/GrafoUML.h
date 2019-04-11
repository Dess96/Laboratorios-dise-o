#ifndef GRAF_UML
#define GRAF_UML
#include"Grafo.h"
#include"ND_UML.h"

class GrafoUML {

private:
	Grafo grafo;

public:
	void agregar_clase(ND_UML nodo_clase);
	void agregar_paquete(ND_UML nodo_paq);
	void agregar_objeto(ND_UML nodo_obj);
	void eliminar_clase(int id);
	void eliminar_paquete(int id);
	void eliminar_objeto(int id);
};
#endif // !GRAF_UML

