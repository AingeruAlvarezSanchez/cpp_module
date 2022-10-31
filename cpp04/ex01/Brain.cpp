#include "Brain.h"

Brain::Brain() {
	std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain &_brain) {
	std::cout << "Copy Brain created" << std::endl;
	for (size_t indexOfIdeas = 0; indexOfIdeas < 100; indexOfIdeas++)
		this->_ideas[indexOfIdeas] = _brain._ideas[indexOfIdeas];
}

Brain::~Brain() {
	std::cout << "destructor for Brain called" << std::endl;
}

const Brain &Brain::operator=(const Brain &_brain) {
	std::cout << "operator overload for Brain called" << std::endl;
	for (size_t indexOfIdeas = 0; indexOfIdeas < 100; indexOfIdeas++)
		this->_ideas[indexOfIdeas] = _brain._ideas[indexOfIdeas];
	return (*this);
}
