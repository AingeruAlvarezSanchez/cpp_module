#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "AMateria.h"
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource{
private:
	AMateria	*_sourcePocket[4];
	int 		_sourcePocketsUsed;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &_materia);
	~MateriaSource();
	const MateriaSource	&operator=(const MateriaSource &_materia);
	void				learnMateria(AMateria *_materia);
	AMateria			*createMateria(const std::string &_type);
};

#endif //MATERIASOURCE_H
