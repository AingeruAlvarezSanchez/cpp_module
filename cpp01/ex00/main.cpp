#include "Zombie.hpp"

int main(void)
{
	Zombie	*paco = newZombie("ZombieStack");
	randomChump("ZombieHeap");
	paco->announce();
	delete paco;
	return (0);
}
