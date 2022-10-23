#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
private:
	std::string	_name;
	uint32_t 	_hitpoints;
	uint32_t 	_energyPoints;
	uint32_t 	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &_clapTrap);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &_clapTrap);
	void		attack(std::string const &_target) const;
	void		takeDamage(unsigned int _amount);
	void		beRepaired(unsigned int _amount);
	std::string	getName(void) const;
	uint32_t	getHitpoints(void) const;
	uint32_t	getEnergyPoints(void) const;
	uint32_t	getAttackDamage(void) const;
};

#endif //CLAPTRAP_HPP
