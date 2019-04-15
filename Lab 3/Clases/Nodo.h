#ifndef NODO_B
#define NODO_B

#include<vector>

using namespace std;

class Nodo {

private:
	int id;
	Nodo* sig;

public:
	Nodo() {
		id = 0;
		sig = nullptr;
	}

	~Nodo() {

	}

	void set_id(int id) {
		this->id = id;
	}

	int get_id() {
		return id;
	}

	Nodo* get_siguiente();
	void modificar_sig(Nodo* sig);
};
#endif // !NODO_B

