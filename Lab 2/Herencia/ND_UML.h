#ifndef NODO_UML
#define NODO_UML

#include"Nodo.h"
#include<string>

class ND_UML : Nodo {

private:
	string nombre;
	int tipo;

public:
	string get_nombre();
	void set_nombre(string nombre);
	//Operaciones 
	void seleccionar_nodo();
	void cortar_nodo();
	void pegar_nodo();
	void eliminar_nodo();
	void aumentar_nodo();
	void reducir_nodo();
	void dibujar_nodo();
};
#endif // !NODO_UML
