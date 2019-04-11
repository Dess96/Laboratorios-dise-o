#ifndef OPER
#define OPER

class ND_UML;

template <typename Self>
class Agrup {
public:
	Agrup();
	~Agrup();
	//Operaciones 
	template <typename T>
	void seleccionar(T& other) {
		for (ND_UML& from : *static_cast<Self*>(this))
		{
			for (ND_UML& to : other)
			{
				from.seleccionarN(to);
			}
		}
	}
};

template <typename Self>
Agrup< Self >::Agrup()
{
}

template <typename Self>
Agrup< Self >::~Agrup()
{
}

#endif // !OPER
