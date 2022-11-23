#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdexcept>

template <class T>
class Array {
public:
	size_t	_sizeOfArray;
	T		*_arrayOfElements;
	Array<T>() { this->_arrayOfElements = new T[0]; this->_sizeOfArray = 0; };
	Array<T>(unsigned int _numberOfElements) { this->_arrayOfElements = new T[_numberOfElements]; this->_sizeOfArray = _numberOfElements; };
	Array<T>(const Array<T> &_copy) { _sizeOfArray = _copy._sizeOfArray; this->_arrayOfElements = new T[_sizeOfArray]; for (size_t index = 0; index < this->_sizeOfArray; index++) this->_arrayOfElements[index] = _copy._arrayOfElements[index]; };
	T	&operator=(const Array<T> &_copy) { this->_arrayOfElements = new T[_copy._arrayOfElements]; for (size_t index; index < this->_sizeOfArray; index++) this->_arrayOfElements[index] = _copy._arrayOfElements[index]; return (*this); };
	T	&operator[](int _reference) { if (_reference < 0) throw std::exception(); if (_reference > (int)this->_sizeOfArray) throw std::exception(); return(this->_arrayOfElements[_reference]); };
	size_t	size(void) const { return (this->_sizeOfArray); };
};

#endif //ARRAY_HPP
