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
	std::cout << "AAnimal default constructor called (type = " << _type << ")" << std::endl;
}

AAnimal::AAnimal( const std::string &name ) : _type(name)
{
	std::cout << "AAnimal parameterized constructor called for" << _type << std::endl;
}

AAnimal::AAnimal( const AAnimal &other ) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called (type = " << _type << ")" << std::endl;
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
	std::cout << "AAnimal destructor called (type " << _type << ")" << std::endl;
}

void	AAnimal::makeSound() const
{
// 	if ( _type == "Cat" )
// 		std::cout << "Meow" << std::endl;
// 	else if ( _type == "Dog" )
// 		std::cout << "Woaf" << std::endl;
	std::cout << "AAnimal cannot make sound" << std::endl;
}