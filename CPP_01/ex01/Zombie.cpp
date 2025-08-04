/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:15:35 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 10:53:04 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed Zombie")
{
	std::cout << _name << " is created with default constructor." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " is created with param constructor." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string &name)
{
	_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
