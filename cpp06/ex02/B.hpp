#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class Base;

class B : public Base {
public:
	B();
	B(const B &_b);
	~B();
	const B &operator=(const B &_b);
};

#endif //B_HPP
