
class Composicion : public Arista_UML {
public:
	Composicion() {};
	~Composicion() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene composicion";
		return oss.str();
	}
};


