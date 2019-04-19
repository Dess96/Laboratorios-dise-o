#pragma once
#include "Nodo.h"
#include "Arista.h"
class Implementaciones {

public:
	virtual ~Implementaciones() {};
	virtual void agregar_nodo(Nodo) = 0;
	virtual void agregar_arista(Nodo,Nodo) = 0;
	virtual void eliminar_nodo(Nodo) = 0;
	virtual void eliminar_arista(Nodo,Nodo) = 0;
};


