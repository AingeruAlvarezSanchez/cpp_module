#ifndef BASE_HPP
#define BASE_HPP
#include <stdexcept>

class Base {
public:
	Base();
	virtual ~Base();
	Base(const Base &_base);
	const Base	&operator=(const Base &_base);
};

#endif //BASE_HPP
