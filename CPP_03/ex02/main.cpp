/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:05:04 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/16 12:15:40 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << C_YELLOW << "\n\t\t Test ClapTrap \n\t\t" << C_RESET << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << C_YELLOW << "\n\n\t\t Test FragTrap \n\t\t" << C_RESET << std::endl;
	FragTrap frag("Fragname");
	frag.highFivesGuys();
	frag.attack("Ennemy");

	return (0);
}