#ifndef CAT_H
#define CAT_H
#include "Animal.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &_cat);
	~Cat();
	const Cat	&operator=(const Cat &_cat);
	void 		makeSound(void) const;
};

#endif //CAT_HPP
