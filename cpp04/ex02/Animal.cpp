#include "Animal.h"

Animal::Animal() {
	this->_type = "Undefined monstrosity";
}

Animal::Animal(const Animal &_animal) {
	this->_type = _animal.getType();
}

Animal::~Animal() {}

const Animal &Animal::operator=(const Animal &_animal) {
	this->_type = _animal.getType();
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << "Suffering noises..." << std::endl;
}
