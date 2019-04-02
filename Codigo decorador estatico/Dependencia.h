
class Dependencia : public Arista_UML {
public:
	Dependencia() {};
	~Dependencia() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene dependencia";
		return oss.str();
	}
};
