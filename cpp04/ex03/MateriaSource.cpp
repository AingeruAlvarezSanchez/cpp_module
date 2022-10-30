#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	for (size_t indexOfSourcePocket = 0; indexOfSourcePocket < 4; indexOfSourcePocket++)
		this->_sourcePocket[indexOfSourcePocket] = NULL;
	this->_sourcePocketsUsed = 0;
}

MateriaSource::MateriaSource(const MateriaSource &_materia) {
	this->_sourcePocketsUsed = _materia._sourcePocketsUsed;
	for (size_t indexOfSourcePocket = 0; indexOfSourcePocket < 4; indexOfSourcePocket++)
	{
		if (_materia._sourcePocket[indexOfSourcePocket])
			this->_sourcePocket[indexOfSourcePocket] = _materia._sourcePocket[indexOfSourcePocket]->clone();
		else
			this->_sourcePocket[indexOfSourcePocket] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (size_t indexOfSourcePocket = 0; indexOfSourcePocket < 4; indexOfSourcePocket++)
	{
		if (this->_sourcePocket[indexOfSourcePocket])
			delete this->_sourcePocket[indexOfSourcePocket];
	}
}

const MateriaSource &MateriaSource::operator=(const MateriaSource &_materia) {
	this->_sourcePocketsUsed = _materia._sourcePocketsUsed;
	for (size_t indexOfSourcePocket = 0; indexOfSourcePocket < 4; indexOfSourcePocket++)
	{
		if (_materia._sourcePocket[indexOfSourcePocket])
			this->_sourcePocket[indexOfSourcePocket] = _materia._sourcePocket[indexOfSourcePocket]->clone();
		else
			this->_sourcePocket[indexOfSourcePocket] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *_materia) {
	if (_sourcePocketsUsed == 4)
		std::cout << "There is no available space in this source" << std::endl;
	else
	{
		this->_sourcePocket[_sourcePocketsUsed] = _materia->clone();
		delete _materia;
		_sourcePocketsUsed++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &_type) {
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
	{
		if (this->_sourcePocket[indexOfPocket]->getType() == _type)
			return (this->_sourcePocket[indexOfPocket]->clone());
	}
	return (0);
}
