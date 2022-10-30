#include "AMateria.h"

AMateria::AMateria() {
	this->_type = "Undefined";
}

AMateria::AMateria(const AMateria &_materia) {
	this->_type = _materia.getType();
}

AMateria::AMateria(const std::string &_type) {
	this->_type = _type;
}

AMateria::~AMateria() {}

const AMateria &AMateria::operator=(const AMateria &_materia) {
	this->_type = _materia.getType();
	return (*this);
}

const std::string &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter &_target) {
	std::cout << "* launches a strange mess at " << _target.getName() << std::endl;
}
