
class Generalizacion : public Arista_UML {
public:
	Generalizacion() {};
	~Generalizacion() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene generalizacion";
		return oss.str();
	}
};

