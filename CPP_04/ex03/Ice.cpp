/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:31:25 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 11:20:29 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << C_DARK_GRAY << "\tIce default constructor called\t\t\t" << C_RESET << std::endl; 
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout << C_DARK_GRAY << "\tIce Parameterized constructor called with type: " << type << "" << C_RESET << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << C_DARK_GRAY << "\tIce copy constructor called\t\t\t" << C_RESET << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
		AMateria::operator=(other);
	return ( *this );
}

AMateria* Ice::clone() const
{
	return ( new Ice(*this) );
}

void Ice::use(ICharacter& target)
{
	std::cout << C_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << C_RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << C_DARK_GRAY << "\tIce destructor called\t\t\t\t" << C_RESET << std::endl;
}