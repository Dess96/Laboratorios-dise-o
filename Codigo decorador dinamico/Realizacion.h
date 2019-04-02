
class Realizacion : public Arista_UML {
public:
	Realizacion() {};
	~Realizacion() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene realizacion" << endl;
	}
};
