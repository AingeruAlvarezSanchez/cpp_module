#include "WrongCat.h"

WrongCat::WrongCat() {
	std::cout << "Default WrongCat created" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &_wrongCat) {
	std::cout << "Copy WrongCat created" << std::endl;
	this->_type = _wrongCat.getType();
}

WrongCat::~WrongCat() {
	std::cout << "destructor for WrongCat called" << std::endl;
}

const WrongCat &WrongCat::operator=(const WrongCat &_wrongCat) {
	std::cout << "operator overload for WrongCat called" << std::endl;
	this->_type = _wrongCat.getType();
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongMeow" << std::endl;
}
