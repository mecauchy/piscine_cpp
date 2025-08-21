/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:06:33 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/21 14:52:37 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
	std::cout << C_DARK_GRAY << "[\tAMateria default constructor called\t]" << C_RESET << std::endl; 
}

AMateria::AMateria( std::string const &type ) : _type(type)
{
	std::cout << C_DARK_GRAY << "[\tAMateria Parameterized constructor called with type : " << type << "]" << C_RESET << std::endl;
}

AMateria::AMateria( const AMateria &other ) : _type(other._type)
{
	std::cout << C_DARK_GRAY << "[\tAMateria copy constructor called\t]" << C_RESET << std::endl;
}

AMateria&	AMateria::operator=( const AMateria &other )
{
	if ( this != &other )
		_type = other._type;
	return ( *this );
}

std::string const	&AMateria::getType() const
{
	return ( _type );
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "AMateria called with materia : " << _type << "used on target : " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
	std::cout << C_DARK_GRAY << "[\tAMateria destructor called\t]" << C_RESET << std::endl;
}