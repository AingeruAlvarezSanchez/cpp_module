#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	yoquin("yoquin");
	ClapTrap	_undefined = ClapTrap();
	ClapTrap	copyClap = ClapTrap(yoquin);

	yoquin.attack("_undefined");
	_undefined.takeDamage(0);
	_undefined.beRepaired(10);
	return (0);
}
