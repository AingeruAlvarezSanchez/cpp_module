#include "Dog.h"

Dog::Dog() {
	std::cout << "Default Dog created" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &_dog) {
	std::cout << "Copy Dog created" << std::endl;
	this->_type = _dog.getType();
	this->_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "destructor for Dog called" << std::endl;
	delete this->_brain;
}

const Dog &Dog::operator=(const Dog &_dog) {
	std::cout << "operator overload for Dog called" << std::endl;
	this->_type = _dog.getType();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
