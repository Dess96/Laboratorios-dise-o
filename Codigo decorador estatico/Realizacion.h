
class Realizacion : public Arista_UML {
public:
	Realizacion() {};
	~Realizacion() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene realizacion";
		return oss.str();
	}
};
