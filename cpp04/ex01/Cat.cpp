#include "Cat.h"

Cat::Cat() {
	std::cout << "Default Cat created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &_cat) {
	std::cout << "Copy Cat created" << std::endl;
	this->_type = _cat.getType();
	this->_brain = new Brain();
	this->_brain = _cat._brain;
}

Cat::~Cat() {
	std::cout << "destructor for Cat called" << std::endl;
	delete this->_brain;
}

const Cat &Cat::operator=(const Cat &_cat) {
	std::cout << "operator overload for Cat called" << std::endl;
	this->_type = _cat.getType();
	std::cout << "cat 1 brain memory: " << &this->_brain;
	std::cout << "cat 2 brain memory: " << &_cat._brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
