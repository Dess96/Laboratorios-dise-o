#include"Arista.h"

using namespace std;

class AristaND : public Arista {
private:
	Arista& arista;
public:
	AristaND(Arista& arista): arista(arista){

	}
	~AristaND(){};
	virtual void imprimir() const override{
		arista.imprimir();
		cout << "es una arista no dirigida"<<endl;
	}
};
