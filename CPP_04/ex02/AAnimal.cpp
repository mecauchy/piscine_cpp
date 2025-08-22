/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:17:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/19 15:06:22 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << C_DARK_GRAY << "AAnimal default constructor called (type = " << _type << ")" << C_RESET << std::endl;
}

AAnimal::AAnimal( const std::string &name ) : _type(name)
{
	std::cout << C_DARK_GRAY << "AAnimal parameterized constructor called for " << _type << C_RESET << std::endl;
}

AAnimal::AAnimal( const AAnimal &other ) : _type(other._type)
{
	std::cout << C_DARK_GRAY << "AAnimal copy constructor called (type = " << _type << ")" << C_RESET << std::endl;
}

AAnimal&	AAnimal::operator=( const AAnimal &other )
{
	if (this != &other)
		_type = other._type;
	std::cout << "AAnimal copy assignement called (type = " << _type << ")" << std::endl;
	return ( *this );
}

const std::string&	AAnimal::getType() const
{
	return ( _type );
}

AAnimal::~AAnimal()
{
	std::cout << C_RED << "AAnimal destructor called (type " << _type << ")" << C_RESET << std::endl;
}