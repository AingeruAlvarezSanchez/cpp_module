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
	~Fixed();
	Fixed	&operator=(const Fixed &_fixed);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif //FIXED_HPP
