/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:33:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 11:36:48 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const std::string &name )
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " Parameterized constructor called for " << name << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other )
{
	_type = other._type;
	_brain = new Brain( *other._brain );
	std::cout << "Cat Copy constructor called" << std::endl;
}

/*
	operator= different 
	creation de new brain
	_brain = new Brain(other._brain);
*/
Cat&	Cat::operator=( const Cat &other )
{
	if ( this != &other )
		Animal::operator=( other );
	if ( _brain )
		delete _brain;
	_brain = new Brain( *other._brain );
	return ( *this );
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return ( _brain );
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}