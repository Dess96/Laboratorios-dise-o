#include <string>
#include "GrafoUML.h"

using namespace std;

class AlmacenadorGrafo {
public:
	AlmacenadorGrafo() {};
	~AlmacenadorGrafo() {};
	virtual void imprimir_objeto(GrafoUML *gr) = 0;
};