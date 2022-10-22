#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
private:
	int					_fixedPointValue;
	static const int	_numberOfFractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &_fixed);
	Fixed(const int _value);
	Fixed(const float _value);
	~Fixed();
	Fixed	&operator=(const Fixed &_fixed);
	Fixed	&operator+(const Fixed &_fixed);
	Fixed	&operator-(const Fixed &_fixed);
	Fixed	&operator*(const Fixed &_fixed);
	Fixed	&operator/(const Fixed &_fixed);
	Fixed	&operator++(void);
	Fixed	&operator++(int);
	Fixed	&operator--(void);
	Fixed	&operator--(int);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	int				toInt(void) const;
	float			toFloat(void) const;
	static Fixed	&min(Fixed &_fixed1, Fixed &_fixed2);
	static const Fixed	&min(const Fixed &_fixed1, const Fixed &_fixed2);
	static Fixed	&max(Fixed &_fixed1, Fixed &_fixed2);
	static const Fixed	&max(const Fixed &_fixed1, const Fixed &_fixed2);
};

std::ostream	&operator<<(std::ostream &_ostream, const Fixed &_fixed);
bool			operator>(const Fixed &_fixed1, const Fixed &_fixed2);
bool			operator<(const Fixed &_fixed1, const Fixed &_fixed2);
bool			operator>=(const Fixed &_fixed1, const Fixed &_fixed2);
bool			operator<=(const Fixed &_fixed1, const Fixed &_fixed2);
bool			operator==(const Fixed &_fixed1, const Fixed &_fixed2);
bool			operator!=(const Fixed &_fixed1, const Fixed &_fixed2);

#endif //FIXED_HPP
