/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:18:51 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/13 15:31:30 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	// Test constructeurs
	std::cout << C_YELLOW << "\t\t Création des robots \n\t\t" << C_RESET << std::endl;
	ClapTrap	robot1("R2D2");
	ClapTrap	robot2("C3PO");
	
	// Test fonctions de base
	std::cout << C_YELLOW << "\n\n\t\t Combat de base \n\t\t" << C_RESET << std::endl;
	robot1.attack("C3PO");
	robot2.takeDamage(2);
	robot2.beRepaired(1);
	
	// Test limites d'énergie
	std::cout << C_YELLOW << "\n\n\t\t Test épuisement énergie \n\t\t" << C_RESET << std::endl;
	ClapTrap	tired("TiredBot");
	for (int i = 0; i < 11; i++)
		tired.attack("enemy");
	
	// Test robot mort
	std::cout << C_YELLOW << "\n\n\t\t Test robot détruit \n\t\t" << C_RESET << std::endl;
	ClapTrap	victim("VictimBot");
	victim.takeDamage(15);
	victim.attack("ghost");
	victim.beRepaired(5);
	
	std::cout << C_YELLOW << "\n\t\t=== Fin des tests ===\n" << C_RESET << std::endl;
	return (0);
}