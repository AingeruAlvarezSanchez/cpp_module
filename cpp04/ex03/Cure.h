#ifndef CURE_H
#define CURE_H
#include "AMateria.h"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &_cure);
	~Cure();
	const Cure			&operator=(const Cure &_cure);
	const std::string 	&getType() const;
	AMateria			*clone() const;
	void 				use(ICharacter &_target);
};

#endif //CURE_H
