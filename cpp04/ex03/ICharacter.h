#ifndef ICHARACTER_H
#define ICHARACTER_H
#include "AMateria.h"

class	AMateria;

class ICharacter {
public:
	virtual ~ICharacter() {};
	virtual const std::string	&getName() const = 0;
	virtual void				equip(AMateria *_materia) = 0;
	virtual void 				unequip(int _indexOfMateria) = 0;
	virtual void 				use(int _indexOfMateria, ICharacter &_target) = 0;
};

#endif //ICHARACTER_H
