#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat &_cat);
	~Cat();
	const Cat	&operator=(const Cat &_cat);
	void 		makeSound(void) const;
};

#endif //CAT_HPP
