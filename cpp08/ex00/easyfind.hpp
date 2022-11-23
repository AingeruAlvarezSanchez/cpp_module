#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <stdexcept>

template <typename T>
typename T::iterator    easyfind(T &_arrayOfData, int _toFind) {
	typename T::iterator    printIterator = _arrayOfData.begin();
	std::cout << "Numbers inside the array: ";
	while (printIterator != _arrayOfData.end()) {
		std::cout << *printIterator << " | ";
		printIterator++;
	}
	std::cout << std::endl;
	typename T::iterator   resultIterator = find(_arrayOfData.begin(), _arrayOfData.end(), _toFind);
	if (resultIterator == _arrayOfData.end())
		throw std::logic_error("Error, number not found");
	return (resultIterator);
}

#endif //EASYFIND_HPP
