#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A : public Base {
public:
	A();
	A(const A &_a);
	~A();
	const A &operator=(const A &_a);
};

#endif //A_HPP
