#include "Cure.h"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(const Cure &_cure) {
	this->_type = _cure.getType();
}

Cure::~Cure() {}

const Cure &Cure::operator=(const Cure &_cure) {
	this->_type = _cure.getType();
	return (*this);
}

const std::string &Cure::getType() const {
	return (this->_type);
}

AMateria *Cure::clone() const {
	Cure	*cloneCure = new Cure();
	return (cloneCure);
}

void Cure::use(ICharacter &_target) {
	std::cout << "* heals " << _target.getName() << "'s wounds *" << std::endl;
}
