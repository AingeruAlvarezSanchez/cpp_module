#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap &_fragTrap);
	~FragTrap();
	FragTrap	&operator=(const FragTrap &_fragTrap);
	void		highFiveGuys(void) const;
};

#endif //FRAGTRAP_HPP
