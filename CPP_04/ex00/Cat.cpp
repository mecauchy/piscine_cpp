/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:33:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/17 14:43:54 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default construcotr called" << std::endl;
}

Cat::Cat( const std::string &name )
{
	type = "Cat";
	std::cout << type << " Parameterized constructor called for " << name << std::endl;
}

Cat::Cat( const Cat &other )
{
	type = "Dog";
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}