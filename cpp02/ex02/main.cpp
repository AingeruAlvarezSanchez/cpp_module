#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl << std::endl;

	std::cout << "The result of a > b is " << (a > b) << std::endl << std::endl;
	std::cout << "The result of a < b is " << (a < b) << std::endl << std::endl;
	std::cout << "The result of b >= d is " << (b >= d) << std::endl << std::endl;
	std::cout << "The result of b <= c is " << (b <= c) << std::endl << std::endl;
	std::cout << "The result of b == c is " << (b == c) << std::endl << std::endl;
	std::cout << "The result of b != d is " << (b != d) << std::endl << std::endl;
	std::cout << "a is " << a << " and the result of a pre-increment is " << std::endl << ++a << std::endl << std::endl;
	std::cout << "a is " << a << " and the result of a pre-decrement is " << std::endl << --a << std::endl << std::endl;
	std::cout << "the result of a post-increment is " << std::endl << a++ << std::endl << std::endl;
	std::cout << "the result of a post-decrement is " << std::endl << a-- << std::endl << std::endl;
	std::cout << "before addition a is " << a << " after addition a + b is -> " << (a + b) << std::endl << std::endl;
	std::cout << "before subtraction a is " << a << " after subtraction a - c is -> " << (a - c) << std::endl << std::endl;
	std::cout << "before multiplication a is " << a << " after multiplication a * d is -> " << (a * d) << std::endl << std::endl;
	std::cout << "before division a is " << a << " after division a / c is -> " << (a / c) << std::endl << std::endl;
	Fixed	test1(2.9f);
	Fixed	test2(3.1f);
	std::cout << "Test for min function, test1 is -> " << test1 << " test 2 is -> " << test2 << std::endl << std::endl;
	Fixed	testMin = Fixed::min(test1, test2);
	std::cout << testMin << std::endl;
	std::cout << "Test for max function, test1 is -> " << test1 << " test 2 is -> " << test2 << std::endl << std::endl;
	Fixed	testMax = Fixed::max(test1, test2);
	std::cout << testMax << std::endl;
	return (0);
}
