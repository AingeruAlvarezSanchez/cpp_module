#include "C.hpp"

C::C() {}

C::C(__unused const C &_c) {}

C::~C() {}

const C &C::operator=(__unused const C &_c) {
	return (*this);
}