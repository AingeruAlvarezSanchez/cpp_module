#include "B.hpp"

B::B() {}

B::B(__unused const B &_b) {}

B::~B() {}

const B &B::operator=(__unused const B &_b) {
	return (*this);
}