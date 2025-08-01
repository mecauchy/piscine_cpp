/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:30:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/01 14:23:48 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// new alloue sur la heap

Zombie*	newZombie(std::string name)
{
	Zombie *Z;

	Z = new Zombie(name);
	return (Z);
}
