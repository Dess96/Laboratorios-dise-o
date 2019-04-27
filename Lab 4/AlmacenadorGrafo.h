#include <string>

using namespace std;

class AlmacenadorGrafo {
public:
	AlmacenadorGrafo() {};
	~AlmacenadorGrafo() {};
	virtual void imprimir_objeto() = 0;
	virtual string obtener_almacenador()= 0;
};