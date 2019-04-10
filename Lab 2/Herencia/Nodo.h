#ifndef NODO_B
#define NODO_B

#include<vector>
#include<iostream>

using namespace std;

class Nodo {

private:
	int id;
	vector<int> adyacencias;

public:
	int get_id() {
		return id;
	}
	void set_id(int id_nodo) {
		id = id_nodo;
	}
};
#endif // !NODO_B

