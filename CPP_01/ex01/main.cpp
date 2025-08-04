#include "Zombie.hpp"

int	main(void)
{
	Zombie *Horde;

	Horde = zombieHorde(5, "Zombie");
	if (!Horde)
	{
		std::cerr << "Failed to create zombie horde." << std::endl;
		return (1);
	}
	for (int i = 0; i < 5; ++i)
	{
		Horde[i].announce();
	}
	delete[] Horde;
	std::cout << "Zombie horde destroyed." << std::endl;
	return (0);
}