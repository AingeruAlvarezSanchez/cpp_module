#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int	main(void) {
	const	Animal	*dog = new Dog();
	const	Animal	*cat = new Cat();

	delete dog;
	delete cat;
	system("leaks Brain");
	return (0);
}
