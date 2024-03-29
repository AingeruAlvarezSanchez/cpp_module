#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(uint32_t _attackDamage);
	ScavTrap(const ScavTrap &_scavTrap);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &_scavTrap);
	void		guardGate(void) const;
};

#endif //SCAVTRAP_HPP
