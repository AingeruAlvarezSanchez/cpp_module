#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class Base;

class C : public Base {
public:
	C();
	C(const C &_c);
	~C();
	const C &operator=(const C &_c);
};

#endif //C_HPP
