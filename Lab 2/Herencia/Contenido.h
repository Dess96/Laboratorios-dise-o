
class Contenido : public Arista_UML {

public:
	Contenido() {};
	~Contenido() {};
	virtual void imprimir() const override {
		Arista_UML uml;
		uml.imprimir();
		cout << " tiene contenido ";
	}
private:
	string icono;
};