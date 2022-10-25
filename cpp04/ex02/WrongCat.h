#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &_wrongCat);
	~WrongCat();
	const WrongCat	&operator=(const WrongCat &_wrongCat);
	void			makeSound(void) const;
};

#endif //WRONGCAT_H
