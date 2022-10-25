#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog &_dog);
	~Dog();
	const Dog	&operator=(const Dog &_dog);
	void		makeSound(void) const;
};

#endif //DOG_H
