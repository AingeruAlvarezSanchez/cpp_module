#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : _name(_name) {
	std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " died" << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << "Wants brains..." << std::endl;
}
