#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : _name(_name) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bare fists " << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon) {
	this->_weapon = &_weapon;
}
