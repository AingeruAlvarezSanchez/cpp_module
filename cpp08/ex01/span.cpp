#include "span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span() : _vectorOfIntegers(0), _numberOfElements(0) {}

Span::Span(unsigned int _numberOfElements) : _numberOfElements(_numberOfElements) {
	this->_vectorOfIntegers.reserve(10000);
}

Span::Span(const Span &_copy) {
	this->_numberOfElements = _copy._numberOfElements;
	this->_vectorOfIntegers.reserve(_numberOfElements); 
	std::vector<int> newVector = _copy._vectorOfIntegers;
	std::vector<int>::iterator	iterator = newVector.begin();
	while (iterator != _copy._vectorOfIntegers.end()) {
		this->_vectorOfIntegers.push_back(*iterator);
		iterator++;
	}
}

Span::~Span() {}

const Span	&Span::operator=(const Span &_copy) {
	this->_numberOfElements = _copy._numberOfElements;
	this->_vectorOfIntegers.reserve(_numberOfElements); 
	std::vector<int> newVector = _copy._vectorOfIntegers;
	std::vector<int>::iterator	iterator = newVector.begin();
	while (iterator != _copy._vectorOfIntegers.end()) {
		this->_vectorOfIntegers.push_back(*iterator);
		iterator++;
	}
	return (*this);
}

void	Span::addNumber(unsigned int _newNumber) {
	if (this->_vectorOfIntegers.size() == this->_numberOfElements)
		throw	std::range_error("Vector is full");
	this->_vectorOfIntegers.push_back(_newNumber);
}

int	Span::shortestSpan(void) const {
	std::vector<int>	vectorCopy = this->_vectorOfIntegers;
	sort(vectorCopy.begin(), vectorCopy.end());
	std::vector<int>::iterator	secondLowest = vectorCopy.begin() + 1;
	while (secondLowest != vectorCopy.end())
	{
		if (*secondLowest != *vectorCopy.begin())
			break ;
		secondLowest++;
	}
	return (*secondLowest - *vectorCopy.begin());
}

int	Span::longestSpan(void) const {
	if (this->_vectorOfIntegers.size() == 0 || this->_vectorOfIntegers.size() == 0) 
		throw	std::range_error("Vector is not valid");
	return (*std::max_element(this->_vectorOfIntegers.begin(), this->_vectorOfIntegers.end()) - *std::min_element(this->_vectorOfIntegers.begin(), this->_vectorOfIntegers.end()));
}

int randomNumberGenerator(void) {
  return (std::rand() % 10000);
}

void	Span::generateNewVector(unsigned int _numberOfElements) {
	if (_numberOfElements <= 1)
		throw	std::range_error("Vector is not valid");
	this->_numberOfElements = _numberOfElements;
	srand(time(0));
	std::vector<int>	newVector(_numberOfElements);
	std::generate(newVector.begin(), newVector.end(), randomNumberGenerator);
	this->_vectorOfIntegers = newVector;
}
