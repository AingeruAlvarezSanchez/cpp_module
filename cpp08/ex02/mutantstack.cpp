#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &_copy) {
	*this = _copy;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
const MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &_copy) {
	*this = _copy;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (this->c.rend());
}
