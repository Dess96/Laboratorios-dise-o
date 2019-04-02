#include"Arista.h"
#include<iostream>
#include<sstream>

using namespace std;

template <typename T>
class AristaD : public T {
	static_assert(is_base_of<Arista, T>::value, "Argumento debe ser una arista");
public:
	template<typename ...Args>
	AristaD(Args ...args) : T(std::forward<Args>(args)...) {

	}
	~AristaD() {};
	string toString() const override {
		ostringstream oss;
		oss << T::toString() << " es dirigida";
		return oss.str();
	}
};
