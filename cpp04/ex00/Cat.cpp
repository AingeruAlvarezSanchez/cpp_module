#include "Cat.h"

Cat::Cat() {
	this->_type = "Cat";
}

Cat::Cat(const Cat &_cat) {
	*this = _cat;
}

Cat::~Cat() {}

const Cat &Cat::operator=(const Cat &_cat) {
	this->_type = _cat.getType();
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
