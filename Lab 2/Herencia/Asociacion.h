
class Asociacion : public Arista_UML {

public:
	Asociacion() {};
	~Asociacion() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene asociacion ";
	}
private:
	string icono;
};

