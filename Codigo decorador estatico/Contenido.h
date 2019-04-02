
class Contenido : public Arista_UML {
public:
	Contenido() {};
	~Contenido() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene contenido";
		return oss.str();
	}
};