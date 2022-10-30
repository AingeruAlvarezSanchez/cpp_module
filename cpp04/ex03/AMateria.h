#ifndef AMATERIA_H
#define AMATERIA_H
#include <iostream>
#include "ICharacter.h"

class	ICharacter;

class AMateria {
protected:
	std::string _type;
public:
	AMateria();
	AMateria(const AMateria &_materia);
	AMateria(const std::string &_type);
	virtual ~AMateria();
	const AMateria		&operator=(const AMateria &_materia);
	const std::string	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void 		use(ICharacter &_target);
};

#endif //AMATERIA_H
