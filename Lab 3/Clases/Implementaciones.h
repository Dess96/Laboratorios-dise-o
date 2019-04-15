#pragma once
class Implementaciones {

public:
	virtual ~Implementaciones() {};
	virtual void crear_grafo() = 0;
	virtual void agregar_nodo() = 0;
	virtual void agregar_arista() = 0;
	virtual void eliminar_nodo() = 0;
	virtual void eliminar_arista() = 0;
};
