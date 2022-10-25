#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &_wrongAnimal);
	~WrongAnimal();
	const WrongAnimal	&operator=(const WrongAnimal &_wrongAnimal);
	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif //WRONGANIMAL_H
