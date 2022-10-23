#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Undefined"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &_clapTrap) {
	*this = _clapTrap;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " Was destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_clapTrap) {
	//TODO
	return (*this);
}

void	ClapTrap::attack(const std::string &_target) const {
	std::cout << this->_name << " attacks " << _target.getName() << " and deals " << this->_attackDamage << " points of damage" << std::endl;
	//_target->takeDamage(this->_attackDamage);
}

void	ClapTrap::takeDamage(unsigned int _amount) {
	std::cout << this->_name << " receives " << _amount << " damage " << std::endl;
	this->_hitpoints -= _amount;
	if (this->_hitpoints <= 0)
		this->~ClapTrap();
	std::cout << this->_name << " now has " << this->_hitpoints << " hitpoints left " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int _amount) {
	if (this->_energyPoints <= _amount)
	{
		std::cout << this->_name << " has not enough energy points" << std::endl;
		this->_energyPoints == 0 ? (std::cout << " and doesn't reinforce itself" << std::endl) : (std::cout << " and uses the energy it has left, recovering " << this->_energyPoints << " points of armor" << std::endl, this->beRepaired(_energyPoints));
		return ;
	}
	std::cout << this->_name << " reinforces itself with " << _amount << " points of armour" << std::endl;
	this->_hitpoints += _amount;
	this->_energyPoints -= _amount;
}