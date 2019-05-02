
class AlmacenadorGrafo {
public:
	AlmacenadorGrafo() {};
	~AlmacenadorGrafo() {};
	virtual void imprimir_clase(GrafoUML *gr) = 0;
	//virtual void imprimir_nodo(ND_UML *nodo) = 0;
};