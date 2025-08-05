/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:48:46 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:41:12 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() : _nameB("Unamed")
{
	std::cout << C_GREEN << "HumanB constructor default called" << C_RESET << std::endl;
}

HumanB::HumanB( std::string name ) : _nameB(name)
{
	std::cout << C_GREEN << "HumanB constructor called with name " << name << C_RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << C_RED << "HumanB Destructor called" << C_RESET << std::endl;
}

Weapon*	HumanB::getWeapon( void ) const
{
	return ( this->_arm );
}

void	HumanB::setWeapon(Weapon &arm)
{
	_arm = &arm;
}


void	HumanB::attack( void ) const
{
	if (_arm)
		std::cout << _nameB << " attacks with their " << _arm->getType() << std::endl;
	else
		std::cout << _nameB << " has no weapon " << std::endl;
}