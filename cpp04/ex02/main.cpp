#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int	main(void) {
	const	Animal	*dog = new Dog();
	const	Animal	*cat = new Cat();

	cat->makeSound();
	dog->makeSound();
	delete dog;
	delete cat;
	return (0);
}
