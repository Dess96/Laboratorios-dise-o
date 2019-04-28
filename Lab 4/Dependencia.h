
class Dependencia : public Arista_UML {
public:
	Dependencia() {};
	~Dependencia() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " de dependencia " << endl;
	}
};
