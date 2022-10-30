#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H
#include "AMateria.h"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {};
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*createMateria(const std::string &_type) = 0;
};

#endif //IMATERIASOURCE_H
