#ifndef NODO_B
#define NODO_B

#include<vector>

using namespace std;

class Nodo {
private:
	int id;
	vector<int> adyacencias;
public:
	int get_id();
	void set_id(int);
};
#endif // !NODO_B


