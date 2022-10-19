#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*_zombieHorde = new Zombie[N];

	for (int indexOfHordeCreation = 0; indexOfHordeCreation < N; indexOfHordeCreation++)
		_zombieHorde[indexOfHordeCreation].setZombieName(name + std::to_string(indexOfHordeCreation));
	return (_zombieHorde);
}
