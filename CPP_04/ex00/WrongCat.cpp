/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:49:19 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/19 16:13:30 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal(other)
{
	_type = "WrongCat";
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat &other )
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongMeow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}