#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 20) {
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

ScavTrap	&ScavTrap::operator=(const ScavTrap &_scavTrap) {
	this->_name = _scavTrap.getName();
	this->_hitpoints = _scavTrap.getHitpoints();
	this->_energyPoints = _scavTrap.getEnergyPoints();
	this->_attackDamage = _scavTrap.getAttackDamage();
	std::cout << "Copy constructor called for " << this->_name << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &_scavTrap) {
	*this = _scavTrap;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " Was destroyed" << std::endl;
}

void	ScavTrap::guardGate(void) const {
	std::cout << this->getName() << " Has entered in gatekeeper mode" << std::endl;
}
