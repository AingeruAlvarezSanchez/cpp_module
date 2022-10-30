#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.h"

class Character : public ICharacter {
private:
	std::string	_name;
	AMateria	*_pocket[4];
	int 		_pocketsUsed;
public:
	Character();
	Character(std::string _name);
	Character(const Character &_copy);
	~Character();
	const Character	&operator=(const Character &_copy);
	const std::string	&getName() const;
	void 				equip(AMateria *_materia);
	void 				unequip(int _indexOfMateria);
	void 				use(int _indexOfMateria, ICharacter &_target);
};

#endif //CHARACTER_H
