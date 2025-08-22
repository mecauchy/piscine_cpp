/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:33:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 11:36:15 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const std::string &name )
{
	_type = "Cat";
	std::cout << _type << " Parameterized constructor called for " << name << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other )
{
	_type = other._type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat&	Cat::operator=( const Cat &other )
{
	if ( this != &other )
		Animal::operator=(other);
	return ( *this );
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}