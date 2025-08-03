#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i = 0;
	if (N <= 0)
	{
		std::cerr << "Error: N must be greater than 0." << std::endl;
		return (nullptr);
	}
	if (name.empty())
	{
		std::cerr << "Error: Name cannot be empty." << std::endl;
		return (nullptr);
	}
	Zombie* horde = new Zombie[N];
	for (i = 0; i < N; ++i)
		horde[i].setName(name + std::to_string(i + 1));
	return (horde);
}