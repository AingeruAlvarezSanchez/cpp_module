#include "Ice.h"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &_ice) {
	this->_type = _ice.getType();
}

Ice::~Ice() {}

const Ice &Ice::operator=(const Ice &_ice) {
	this->_type = _ice.getType();
	return (*this);
}

const std::string &Ice::getType() const {
	return (this->_type);
}

AMateria *Ice::clone() const {
	Ice	*cloneIce = new Ice();
	return (cloneIce);
}

void Ice::use(ICharacter &_target) {
	std::cout << "* shoots an ice bolt at " << _target.getName() << " *" << std::endl;
}
