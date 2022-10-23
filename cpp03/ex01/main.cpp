#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	yoquin("yoquin");
	ClapTrap	_undefined = ClapTrap();
	ClapTrap	copyClap = ClapTrap(yoquin);
	ScavTrap	solinis("solinis");

	yoquin.attack("_undefined");
	_undefined.takeDamage(0);
	_undefined.beRepaired(10);
	solinis.guardGate();
	solinis.attack("yoquin");
	yoquin.takeDamage(solinis.getAttackDamage());
	solinis.beRepaired(60);
	solinis.beRepaired(10);
	std::cout << "Solinis now has the incredible amount of " << solinis.getHitpoints() << " hitpoints" << std::endl;
	return (0);
}
