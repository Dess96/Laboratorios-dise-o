
class Composicion : public Arista_UML {
public:
	Composicion() {};
	~Composicion() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " de composicion " << endl;
	}
};

