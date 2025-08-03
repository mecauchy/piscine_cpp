/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:15:35 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/03 17:15:12 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << _name << " is created." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " is created." << std::endl;
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
