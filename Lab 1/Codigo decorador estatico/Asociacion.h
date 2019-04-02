
class Asociacion : public Arista_UML {
public:
	Asociacion() {};
	~Asociacion() {};
	string toString() const
	{
		Arista_UML uml;
		cout << uml.toString();
		ostringstream oss;
		oss << "tiene asociacion";
		return oss.str();
	}
};
