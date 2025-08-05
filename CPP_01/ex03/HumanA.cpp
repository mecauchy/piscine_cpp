/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:24:36 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:39:09 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &ref) : _name(name), _arm(ref)
{
	std::cout	<< C_GREEN << "HumanA Constructor called with name : "
				<< name << " and arm " << ref.getType() << C_RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << C_RED << "HumanA destructor called" << C_RESET << std::endl;
}

void	HumanA::attack( void ) const
{
	std::cout << _name << " attacks with their " << _arm.getType() << std::endl;
}