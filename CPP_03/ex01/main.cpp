/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:05:04 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/18 12:29:45 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << C_YELLOW << "\n\t\t Test ClapTrap \n\t\t" << C_RESET << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << C_YELLOW << "\n\n\t\t Test ScavTrap \n\t\t" << C_RESET << std::endl;
	ScavTrap scav("Scavvy");
	scav.attack("Target");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << C_YELLOW << "\n\n\t\t Test Copy \n\t\t" << C_RESET << std::endl;
	ScavTrap scav2(scav);
	scav2.guardGate();

	return (0);
}