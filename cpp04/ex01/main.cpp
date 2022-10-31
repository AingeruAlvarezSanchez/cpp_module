#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main(void)
{
	Animal *animal_array[20];

	for (int i=0; i<=19; i++)
	{
		if (i < 10)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	for (int i=0; i<=19; i++)
	{
		delete animal_array[i];
	}

	std::cout << "==================================================" << std::endl;
	Cat cat1;
	Cat cat2;

	cat2 = cat1;
	std::cout << "cat 1 memory: " << &cat1 << std::endl;
	std::cout << "cat 2 memory: " << &cat2 << std::endl;
}
