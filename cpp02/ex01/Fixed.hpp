#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
private:
	int			_fixedPointValue;
	static const int	_numberOfFractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &_fixed);
	Fixed(const int _value);
	Fixed(const float _value);
	~Fixed();
	Fixed	&operator=(const Fixed &_fixed);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &_ostream, const Fixed &_fixed);

#endif //FIXED_HPP
