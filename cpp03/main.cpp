#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	yoquin("yoquin");
	ClapTrap	_undefined = ClapTrap();

	yoquin.attack("_undefined");
	_undefined.beRepaired(10);
	return (0);
}
