/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:04:37 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 11:04:38 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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