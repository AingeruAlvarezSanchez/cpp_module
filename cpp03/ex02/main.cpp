#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	yoquin("yoquin");
	ClapTrap	_undefined = ClapTrap();
	ClapTrap	copyClap = ClapTrap(yoquin);
	ScavTrap	solinis("solinis");
	FragTrap	toñete("toñete");

	yoquin.attack("_undefined");
	_undefined.takeDamage(0);
	_undefined.beRepaired(10);
	solinis.guardGate();
	solinis.attack("yoquin");
	yoquin.takeDamage(solinis.getAttackDamage());
	solinis.beRepaired(60);
	solinis.beRepaired(10);
	std::cout << "Solinis now has the incredible amount of " << solinis.getHitpoints() << " hitpoints" << std::endl;
	toñete.highFiveGuys();
	toñete.attack("solinis");
	yoquin.attack("toñete");
	toñete.takeDamage(yoquin.getAttackDamage());
	FragTrap	toñete2 = toñete;
	toñete2.highFiveGuys();
	return (0);
}
