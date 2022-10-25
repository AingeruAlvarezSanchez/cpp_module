#include "Brain.h"

Brain::Brain() {}

Brain::Brain(const Brain &_brain) {
	*this = _brain;
}

Brain::~Brain() {}

const Brain &Brain::operator=(__attribute__((unused)) const Brain &_brain) {
	for (size_t indexOfIdeas = 0; indexOfIdeas < 100; indexOfIdeas++)
		this->_ideas[indexOfIdeas] = _brain._ideas[indexOfIdeas];
	return (*this);
}
