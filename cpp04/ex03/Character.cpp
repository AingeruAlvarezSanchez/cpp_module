#include "Character.h"

Character::Character() {
	this->_name = "Undefined";
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
		this->_pocket[indexOfPocket] = NULL;
	this->_pocketsUsed = 0;
}

Character::Character(std::string _name) {
	this->_name = _name;
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
		this->_pocket[indexOfPocket] = NULL;
	this->_pocketsUsed = 0;
}

Character::Character(const Character &_copy) {
	this->_name = _copy.getName();
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
		this->_pocket[indexOfPocket] = _copy._pocket[indexOfPocket] ? _copy._pocket[indexOfPocket]->clone() : NULL;
	this->_pocketsUsed = 0;
}

Character::~Character() {
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
	{
		if (this->_pocket[indexOfPocket])
			delete this->_pocket[indexOfPocket];
	}
	std::cout << "Character " << this->getName() << " destroyed" << std::endl;
}

const Character &Character::operator=(const Character &_copy) {
	this->_name = _copy.getName();
	for (size_t indexOfPocket = 0; indexOfPocket < 4; indexOfPocket++)
		this->_pocket[indexOfPocket] = _copy._pocket[indexOfPocket]->clone();
	this->_pocketsUsed = _copy._pocketsUsed;
	return (*this);
}

const std::string &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *_materia) {
	if (this->_pocketsUsed == 4)
		std::cout << "There are no pockets left for equipping this materia" << std::endl;
	else
	{
		this->_pocket[_pocketsUsed] = _materia;
		std::cout << "Materia " << _materia->getType() << " equipped on slot " << this->_pocketsUsed << std::endl;
		this->_pocketsUsed++;
	}
}

void Character::unequip(int _indexOfMateria) {
	if (this->_pocketsUsed == 0)
		std::cout << "There are no materias equipped" << std::endl;
	else
	{
		std::cout << "Materia unequiped from slot " << _indexOfMateria << std::endl;
		this->_pocket[_indexOfMateria] = NULL;
		this->_pocketsUsed--;
	}
}

void Character::use(int _indexOfMateria, ICharacter &_target) {
	if (this->_pocketsUsed == 0)
		std::cout << "There are no materias equipped" << std::endl;
	else
	{
		this->_pocket[_indexOfMateria]->use(_target);
		std::cout << "Materia from slot " << _indexOfMateria << " used" << std::endl;
	}
}
