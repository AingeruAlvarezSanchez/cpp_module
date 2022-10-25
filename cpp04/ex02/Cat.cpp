#include "Cat.h"

Cat::Cat() {
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &_cat) {
	*this = _cat;
}

Cat::~Cat() {
	delete this->_brain;
}

const Cat &Cat::operator=(const Cat &_cat) {
	this->_type = _cat.getType();
	this->_brain = _cat._brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
