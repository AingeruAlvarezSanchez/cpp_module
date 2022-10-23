#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &_scavTrap);
	~ScavTrap();
	//ScavTrap	&operator=(const ScavTrap &_scavTrap);
	void		guardGate(void);
};

#endif //SCAVTRAP_HPP
