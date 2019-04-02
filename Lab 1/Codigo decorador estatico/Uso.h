
class Uso : public Arista_UML {
public:
	Uso() {};
	~Uso() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene uso";
		return oss.str();
	}
};