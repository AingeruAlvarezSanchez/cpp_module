#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string _name);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon &Weapon);
};

#endif //HUMANB_HPP
