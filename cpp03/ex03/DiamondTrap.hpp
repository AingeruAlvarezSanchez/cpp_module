#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string _name);
	DiamondTrap(const DiamondTrap &_diamondTrap);
	~DiamondTrap();
	DiamondTrap	&operator=(const DiamondTrap &_diamondTrap);
	void	whoAmI(void) const;
};

#endif //DIAMONDTRAP_HPP
