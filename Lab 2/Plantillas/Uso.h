
class Uso : public Arista_UML {

public:
	Uso() {};
	~Uso() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene uso ";
	}
private:
	string icono;
};
