/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:17:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 09:50:57 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called (type = " << _type << ")" << std::endl;
}

Animal::Animal( const std::string &name ) : _type(name)
{
	std::cout << "Animal parameterized constructor called for" << _type << std::endl;
}

Animal::Animal( const Animal &other ) : _type(other._type)
{
	std::cout << "Animal copy constructor called (type = " << _type << ")" << std::endl;
}

Animal&	Animal::operator=( const Animal &other )
{
	if (this != &other)
		_type = other._type;
	std::cout << "Animal copy assignement called (type = " << _type << ")" << std::endl;
	return ( *this );
}

const std::string&	Animal::getType() const
{
	return ( _type );
}

Animal::~Animal()
{
	std::cout << "Animal destructor called (type " << _type << ")" << std::endl;
}
