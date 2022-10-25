#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain {
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain &_brain);
	~Brain();
	const Brain	&operator=(const Brain &_brain);
};

#endif //BRAIN_H
