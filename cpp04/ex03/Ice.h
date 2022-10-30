#ifndef ICE_H
#define ICE_H
#include "AMateria.h"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &_ice);
	~Ice();
	const Ice			&operator=(const Ice &_ice);
	const std::string 	&getType() const;
	AMateria			*clone() const;
	void 				use(ICharacter &_target);
};

#endif //ICE_H
