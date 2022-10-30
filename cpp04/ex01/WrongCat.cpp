#include "WrongCat.h"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &_wrongCat) {
	this->_type = _wrongCat.getType();
}

WrongCat::~WrongCat() {}

const WrongCat &WrongCat::operator=(const WrongCat &_wrongCat) {
	this->_type = _wrongCat.getType();
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongMeow" << std::endl;
}
