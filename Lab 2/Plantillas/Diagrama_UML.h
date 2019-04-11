#ifndef DIAGRA
#define DIAGRA
#include"Agrup.h"
#include"ND_UML.h"
#include<vector>
using namespace std;

class Diagrama_UML : public vector <ND_UML>, public Agrup <Diagrama_UML> {

public:
	Diagrama_UML(int count);
	~Diagrama_UML();
};

Diagrama_UML::Diagrama_UML(int count)
{
	while (count-- > 0)
		emplace_back(ND_UML{});
}

Diagrama_UML::~Diagrama_UML()
{
}

#endif // !DIAGRA

