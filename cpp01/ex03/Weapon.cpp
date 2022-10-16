#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : _type(_type) {}

Weapon::~Weapon() {}

const std::string	&Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string _newType) {
	this->_type = _newType;
}
