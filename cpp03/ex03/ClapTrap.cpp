#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Undefined"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(unsigned int _hitpoints, unsigned int _attackDamage) : _hitpoints(_hitpoints), _energyPoints(10), _attackDamage(_attackDamage) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &_clapTrap) {
	*this = _clapTrap;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " Was destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_clapTrap) {
	this->_name = _clapTrap.getName();
	this->_hitpoints = _clapTrap.getHitpoints();
	this->_energyPoints = _clapTrap.getEnergyPoints();
	this->_attackDamage = _clapTrap.getAttackDamage();
	std::cout << "Copy constructor called for " << this->_name << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &_target) const {
	std::cout << this->_name << " attacks " << _target << " and deals " << this->_attackDamage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int _amount) {
	std::cout << this->_name << " receives " << _amount << " damage " << std::endl;
	if (this->_hitpoints <= _amount)
	{
		this->~ClapTrap();
		return ;
	}
	this->_hitpoints -= _amount;
	std::cout << this->_name << " now has " << this->_hitpoints << " hitpoints left " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int _amount) {
	if (this->_energyPoints < _amount)
	{
		std::cout << this->_name << " has not enough energy points";
		this->_energyPoints == 0 ? std::cout << " and doesn't reinforce itself" << std::endl : std::cout << " and uses the energy it has left, recovering " << this->_energyPoints << " points of armor" << std::endl;
		this->beRepaired(this->_energyPoints);
	}
	else
	{
		std::cout << this->_name << " reinforces itself with " << _amount << " points of armour" << std::endl;
		this->_hitpoints += _amount;
		this->_energyPoints -= _amount;
	}
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

uint32_t	ClapTrap::getHitpoints(void) const {
	return (this->_hitpoints);
}

uint32_t	ClapTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

uint32_t	ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string _newName) {
	this->_name = _newName;
}

void	ClapTrap::setHitpoints(uint32_t _newHitpoints) {
	this->_hitpoints = _newHitpoints;
}

void	ClapTrap::setEnergyPoints(uint32_t _newEnergyPoints) {
	this->_energyPoints = _newEnergyPoints;
}

void	ClapTrap::setAttackDamage(uint32_t _newAttackDamage) {
	this->_attackDamage = _newAttackDamage;
}
