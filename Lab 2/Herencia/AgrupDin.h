#ifndef GROUP
#define GROUP
#include"Agrup.h"
#include"ND_UML.h"
#include"Arista_UML.h"
#include"Paquete_UML.h"
#include"Diagrama_UML.h"

using namespace std;

class AgrupDin : public Agrup {
public:
	AgrupDin();
	~AgrupDin();

	void seleccionar(int id) override;
	void cortar(int id) override;
	void pegar(int id) override;
	void eliminar(int id) override;
	void aumentar(int id) override;
	void reducir(int id) override;
	void dibujar(int id) override; 
private:
	vector<ND_UML*> nodos_uml;
	vector<Arista_UML*> aristas_uml;
	vector<Paquete_UML*> paquetes_uml;
};
#endif // !GROUP

