#include"Arista_UML.h"

class Agregacion : public Arista_UML {
public:
	Agregacion(){};
	~Agregacion(){};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene agregacion";
		return oss.str();
	}
};
