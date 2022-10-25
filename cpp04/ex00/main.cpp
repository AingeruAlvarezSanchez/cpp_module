#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int	main(void) {
	const	Animal	*meta = new Animal();
	const	Animal	*dog = new Dog();
	const	Animal	*cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << "// Wrong animal checks //" << std::endl;
	const	WrongAnimal	*wrongMeta = new WrongAnimal();
	const	WrongAnimal	*wrongCat = new WrongCat();
	wrongMeta->makeSound();
	wrongCat->makeSound();
	return (0);
}
