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
	this->setRawBits(_fixed._fixedPointValue);
	return (*this);
}

bool 	operator>(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() > _fixed2.getRawBits() ? 1 : 0);
}

bool 	operator<(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() < _fixed2.getRawBits() ? 1 : 0);
}

bool 	operator>=(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() >= _fixed2.getRawBits() ? 1 : 0);
}

bool 	operator<=(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() <= _fixed2.getRawBits() ? 1 : 0);
}

bool 	operator==(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() == _fixed2.getRawBits() ? 1 : 0);
}

bool 	operator!=(const Fixed &_fixed1, const Fixed &_fixed2) {
	return (_fixed1.getRawBits() != _fixed2.getRawBits() ? 1 : 0);
}

Fixed	&Fixed::operator+(const Fixed &_fixed) {
	std::cout << "Addition operator called" << std::endl;
	this->setRawBits(this->_fixedPointValue += _fixed.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &_fixed) {
	std::cout << "Subtraction operator called" << std::endl;
	this->setRawBits(this->_fixedPointValue -= _fixed.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &_fixed) {
	std::cout << "Multiplication operator called" << std::endl;
	this->setRawBits(this->_fixedPointValue * (_fixed.getRawBits() >> this->_numberOfFractionalBits));
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &_fixed) {
	std::cout << "Division operator called" << std::endl;
	this->setRawBits((this->_fixedPointValue << this->_numberOfFractionalBits) / _fixed.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator++(void) {
	std::cout << "Pre-increment operator called" << std::endl;
	this->setRawBits(++this->_fixedPointValue);
	return (*this);
}

Fixed	&Fixed::operator++(int) {
	std::cout << "Post-increment operator called" << std::endl;
	this->setRawBits(this->_fixedPointValue + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void) {
	std::cout << "pre-decrement operator called" << std::endl;
	this->setRawBits(--this->_fixedPointValue);
	return (*this);
}

Fixed	&Fixed::operator--(int) {
	std::cout << "post-decrement operator called" << std::endl;
	this->setRawBits(this->_fixedPointValue - 1);
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

Fixed	&Fixed::min(Fixed &_fixed1, Fixed &_fixed2) {
	return (_fixed1 < _fixed2 ? _fixed1 : _fixed2);
}

const Fixed	&Fixed::min(Fixed const &_fixed1, Fixed const &_fixed2) {
	return (_fixed1 < _fixed2 ? _fixed1 : _fixed2);
}

Fixed	&Fixed::max(Fixed &_fixed1, Fixed &_fixed2) {
	return (_fixed1 > _fixed2 ? _fixed1 : _fixed2);
}

const Fixed	&Fixed::max(Fixed const &_fixed1, Fixed const &_fixed2) {
	return (_fixed1 > _fixed2 ? _fixed1 : _fixed2);
}
