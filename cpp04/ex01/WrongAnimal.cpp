#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal created" << std::endl;
	this->_type = "Undefined monstrosity";
}

WrongAnimal::WrongAnimal(const WrongAnimal &_wrongAnimal) {
	std::cout << "Copy WrongAnimal created" << std::endl;
	this->_type = _wrongAnimal.getType();
}

WrongAnimal::~WrongAnimal() {
	std::cout << "destructor for WrongAnimal called" << std::endl;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &_wrongAnimal) {
	std::cout << "operator overload for WrongAnimal called" << std::endl;
	this->_type = _wrongAnimal.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Suffering noises..." << std::endl;
}
