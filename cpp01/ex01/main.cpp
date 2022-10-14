#include "Zombie.hpp"

int main(void)
{
	Zombie	*_zombieHorde = zombieHorde(5, "HordeZombie");

	for (int indexOfAnnouncement = 0; indexOfAnnouncement < 5; indexOfAnnouncement++)
		_zombieHorde[indexOfAnnouncement].announce();
	delete [] _zombieHorde;
	return (0);
}