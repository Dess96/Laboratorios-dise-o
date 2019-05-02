class Herencia : public Arista_UML {
public:
	Herencia() {};
	~Herencia() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " de herencia " << endl;
	}
};