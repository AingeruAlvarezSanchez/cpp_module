#include "Base.hpp"

Base::Base() {}

Base::Base(__attribute__((unused)) const Base &_base) {}

Base::~Base() {}

const Base &Base::operator=(__attribute__((unused)) const Base &_base) {
	return (*this);
}