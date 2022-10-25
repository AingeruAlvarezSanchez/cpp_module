#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	this->_type = "Undefined monstrosity";
}

WrongAnimal::WrongAnimal(const WrongAnimal &_wrongAnimal) {
	*this = _wrongAnimal;
}

WrongAnimal::~WrongAnimal() {}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &_wrongAnimal) {
	this->_type = _wrongAnimal.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Suffering noises..." << std::endl;
}
