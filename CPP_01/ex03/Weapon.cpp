/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:00:49 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 15:05:38 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string arm )
{
}

Weapon::~Weapon()
{
}

std::string&	Weapon::getType( void )
{
	return ( this->_type );
}

void	setType( const std::string& type )
{
	
}
