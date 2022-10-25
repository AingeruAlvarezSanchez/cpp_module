#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
protected:
	std::string	_type;
public:
	Animal();
	Animal(const Animal &_animal);
	virtual	~Animal();
	const Animal	&operator=(const Animal &_animal);
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif //ANIMAL_H
