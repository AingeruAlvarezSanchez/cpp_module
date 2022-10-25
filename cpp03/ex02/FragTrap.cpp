#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->setName("Undefined");
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string _name) {
	this->setName(_name);
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &_fragTrap) {
	this->_name = _fragTrap.getName();
	this->_hitpoints = _fragTrap.getHitpoints();
	this->_energyPoints = _fragTrap.getEnergyPoints();
	this->_attackDamage = _fragTrap.getAttackDamage();
	std::cout << "Copy constructor called for " << this->_name << std::endl;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &_fragTrap) {
	*this = _fragTrap;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " Was destroyed" << std::endl;
}

void	FragTrap::highFiveGuys() const {
	std::cout << "Hey guys! Lets high five!" << std::endl;
}
