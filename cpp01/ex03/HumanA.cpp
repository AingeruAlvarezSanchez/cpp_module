#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : _name(_name), _weapon(_weapon){}

HumanA::~HumanA() {}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
