#include"Arista.h"
#include<iostream>
#include<sstream>

using namespace std;

template <typename T>
class AristaND : public T {
	static_assert(is_base_of<Arista, T>::value, "Argumento debe ser una arista");
public:
	template<typename ...Args>
	AristaND(Args ...args) : T(std::forward<Args>(args)...) {

	}
	~AristaND() {};
	string toString() const override {
		ostringstream oss;
		oss << T::toString() << " es no dirigida";
		return oss.str();
	}
};
