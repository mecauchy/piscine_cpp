/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:33:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 10:17:13 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << C_DARK_GRAY << "Cat default constructor called" << C_RESET << std::endl;
}

Cat::Cat( const std::string &name )
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << C_DARK_GRAY << _type << " Parameterized constructor called for " << name << C_RESET << std::endl;
}

Cat::Cat( const Cat &other ) : AAnimal( other )
{
	_type = "Cat";
	_brain = new Brain( *other._brain );
	std::cout << C_DARK_GRAY << "Cat Copy constructor called" << C_RESET << std::endl;
}

/*
	operator= different 
	creation de new brain
	_brain = new Brain(other._brain);
*/
Cat&	Cat::operator=( const Cat &other )
{
	if ( this != &other )
		AAnimal::operator=( other );
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
	std::cout << C_RED << "Cat destructor called and _brain has been destroyed" << C_RESET << std::endl;
}