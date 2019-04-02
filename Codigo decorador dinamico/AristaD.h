#include"Arista.h"

using namespace std;

class AristaD : public Arista {
private:
	Arista& arista;
public:
	AristaD(Arista& arista) : arista(arista) {

	}
	~AristaD() {};
	virtual void imprimir() const override {
		arista.imprimir();
		cout << "es una arista dirigida" << endl;
	}
};
