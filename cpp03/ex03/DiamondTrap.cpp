#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "Undefined";
	ClapTrap::setName("Undefined_clap_name");
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << this->_name << " DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) {
	this->_name = _name;
	ClapTrap::setName(_name + "_clap_name");
	this->setHitpoints(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << this->_name << " DiamondTrap created" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &_diamondTrap) {
	this->_name = _diamondTrap.getName();
	this->_hitpoints = _diamondTrap.getHitpoints();
	this->_energyPoints = _diamondTrap.getEnergyPoints();
	this->_attackDamage = _diamondTrap.getAttackDamage();
	std::cout << "Copy constructor called for " << this->_name << std::endl;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &_diamondTrap) {
	*this = _diamondTrap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " Was destroyed" << std::endl;
}

void	DiamondTrap::whoAmI() const {
	std::cout << "I am " << this->_name << " and my claptrap name is " << ClapTrap::getName() << std::endl;
}
