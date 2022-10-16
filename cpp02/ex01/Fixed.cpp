#include <cmath>
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

Fixed::Fixed(const int _value) : _fixedPointValue(_value << this->_numberOfFractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _value) : _fixedPointValue(roundf(_value * (1 << this->_numberOfFractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &_fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = _fixed._fixedPointValue;
	return (*this);
}

std::ostream	&operator<<(std::ostream &_ostream, const Fixed &_fixed) {
	_ostream << _fixed.toFloat();
	return (_ostream);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_numberOfFractionalBits);
}

float	Fixed::toFloat(void) const {
	return ((float)((float)this->_fixedPointValue / 256));
}
