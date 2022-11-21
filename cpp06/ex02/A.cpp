#include "A.hpp"

A::A() {}

A::A(__unused const A &_a) {}

A::~A() {}

const A &A::operator=(__unused const A &_a) {
	return (*this);
}