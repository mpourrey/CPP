#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;

	zombie = newZombie("Marcel");
	(*zombie).announce();
	delete zombie;
	randomChump("Clotilde");
	return (0);
}