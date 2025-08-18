/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:17:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/17 15:15:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called (type = )" << type << ")" << std::endl;
}

Animal::Animal( const std::string &name ) : type(name)
{
	std::cout << "Animal parameterized constructor called for" << type << std::endl;
}

Animal::Animal( const Animal &other ) : type(other.type)
{
	std::cout << "Animal copy constructor called (type = " << type << ")" << std::endl;
}

Animal&	Animal::operator=( const Animal &other )
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal copy assignement called (type = " << type << ")" << std::endl;
	return ( *this );
}

const std::string&	Animal::getType()
{
	return ( type );
}

Animal::~Animal()
{
	std::cout << "Animal destructor called (type " << type << ")" << std::endl;
}

void	makeSound()
{
	std::cout << "Animal "
}