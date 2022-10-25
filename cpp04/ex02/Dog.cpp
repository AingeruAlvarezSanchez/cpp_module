#include "Dog.h"

Dog::Dog() {
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &_dog) {
	*this = _dog;
}

Dog::~Dog() {
	delete this->_brain;
}

const Dog &Dog::operator=(const Dog &_dog) {
	this->_type = _dog.getType();
	this->_brain = _dog._brain;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
