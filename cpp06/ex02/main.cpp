#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base &_basePointer)
{
	try {
		if (&_basePointer == (void *)0x0)
			throw	std::bad_cast();
	}
	catch (std::exception &_exception) {
		std::cout << "NULL pointer throwed exception : " << _exception.what() << std::endl;
		return ;
	}
	try {
		__unused A &a = dynamic_cast<A &>(_basePointer);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &_exception) {
		try {
			__unused B &b = dynamic_cast<B &>(_basePointer);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &_exception) {
			std::cout << "C" << std::endl;
		}
	}
}

void	identify(Base *_basePointer)
{
	{
		A	*a;
		a = dynamic_cast<A *>(_basePointer);
		if (a) {
			std::cout << "A" << std::endl;
			return ;
		}
	}
	{
		B	*b;
		b = dynamic_cast<B *>(_basePointer);
		if (b) {
			std::cout << "B" << std::endl;
			return ;
		}
	}
	{
		C	*c;
		c = dynamic_cast<C *>(_basePointer);
		if (c) {
			std::cout << "C" << std::endl;
			return ;
		}
	}
	std::cout << "NULL pointer" << std::endl;
}

Base *generate(void) {
	Base	*newBase;
	srand(time(0));
	int	objectGeneratorNumber;

	objectGeneratorNumber = rand();
	if (objectGeneratorNumber % 3 == 0)
		newBase = new A();
	else if (objectGeneratorNumber % 3 == 1)
		newBase = new B();
	else
		newBase = new C();
	return (newBase);
}

int	main(void)
{
	Base	*baseExample;
	Base	*baseNullExample = NULL;

	baseExample = generate();
	identify(baseExample);
	identify(baseNullExample);
	identify(*baseExample);
	identify(*baseNullExample);
	delete baseExample;
	return (0);
}
