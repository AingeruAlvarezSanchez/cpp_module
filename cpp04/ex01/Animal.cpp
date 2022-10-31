#include "Animal.h"

Animal::Animal() {
	std::cout << "Default Animal created" << std::endl;
	this->_type = "Undefined monstrosity";
}

Animal::Animal(const Animal &_animal) {
	std::cout << "Copy Animal created" << std::endl;
	*this = _animal;
}

Animal::~Animal() {}

const Animal &Animal::operator=(const Animal &_animal) {
	std::cout << "destructor for Animal called" << std::endl;
	this->_type = _animal.getType();
	return (*this);
}

std::string	Animal::getType(void) const {
	std::cout << "operator overload for Animal called" << std::endl;
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << "Suffering noises..." << std::endl;
}
