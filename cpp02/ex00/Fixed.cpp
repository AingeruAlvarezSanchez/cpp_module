#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = _fixed;
}

Fixed	&Fixed::operator=(const Fixed &_fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = _fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}
