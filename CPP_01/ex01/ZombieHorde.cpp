/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:04:44 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 11:04:45 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i = 0;
	if (N <= 0)
	{
		std::cerr << "Error: N must be greater than 0." << std::endl;
		return (NULL);
	}
	if (name.empty())
	{
		std::cerr << "Error: Name cannot be empty." << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N];
	for (i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}