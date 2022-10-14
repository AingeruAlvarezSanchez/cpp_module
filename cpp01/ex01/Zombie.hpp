#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
	std::string	_name;
public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void 	setZombieName(std::string _name);
	void	announce(void) const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP
