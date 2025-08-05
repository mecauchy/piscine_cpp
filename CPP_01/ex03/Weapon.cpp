/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:00:49 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:41:47 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("Unused type")
{
	std::cout << C_GREEN << "Weapon default constructor called" << C_RESET << std::endl;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << C_GREEN << "Weapon constructor called with "<< type << C_RESET  << std::endl;
}

Weapon::~Weapon()
{
	std::cout << C_RED << "Weapon destructor called" << C_RESET << std::endl;
}

std::string&	Weapon::getType( void )
{
	return ( this->_type );
}

void	Weapon::setType( const std::string& type )
{
	_type = type;
}
