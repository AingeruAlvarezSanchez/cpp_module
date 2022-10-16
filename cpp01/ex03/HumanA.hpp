#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon		&_weapon;
public:
	HumanA(std::string _name, Weapon &_weapon);
	~HumanA();
	void	attack(void) const;
};

#endif //HUMANA_HPP
