
class Generalizacion : public Arista_UML {

public:
	Generalizacion() {};
	~Generalizacion() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene generalizacion " << endl;
	}
};

