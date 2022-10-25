#include "Dog.h"

Dog::Dog() {
	this->_type = "Dog";
}

Dog::Dog(const Dog &_dog) {
	*this = _dog;
}

Dog::~Dog() {}

const Dog &Dog::operator=(const Dog &_dog) {
	this->_type = _dog.getType();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
