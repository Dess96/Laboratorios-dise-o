#ifndef OPER
#define OPER
class Agrup {
public:
	//Operaciones 
	virtual void seleccionar(int id) = 0; 
	virtual void cortar(int id) = 0;
	virtual void pegar(int id) = 0;
	virtual void eliminar(int id) = 0;
	virtual void aumentar(int id) = 0;
	virtual void reducir(int id) = 0;
	virtual void dibujar(int id) = 0; 
};
#endif // !OPER
