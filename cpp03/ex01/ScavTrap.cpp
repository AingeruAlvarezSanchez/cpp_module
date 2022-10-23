#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->setName("Undefined");
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << this->_name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) {
	this->setName(_name);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << this->_name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_scavTrap) {
	*this = _scavTrap;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " Was destroyed" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " Has entered in gatekeeper mode" << std::endl;
}
