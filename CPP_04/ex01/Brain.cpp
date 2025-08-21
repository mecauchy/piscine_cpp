/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:57:12 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/20 16:36:26 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	unsigned int i;
	
	std::cout << "Brain default constructor called" << std::endl;
	for (i = 0; i < 100; ++i)
		_ideas[i] = "";
}

Brain::Brain(const Brain &other)
{
	unsigned int i;

	std::cout << "Brain Copy constructor called" << std::endl;
	for (i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
	unsigned int i;

	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return ( *this );
}

void	Brain::setIdea( unsigned int index, const std::string &idea )
{
	if (index < 100)
		_ideas[index] = idea;
	else
		std::cout << C_RED << "ERROR\n" << C_DARK_GRAY << "index out of range" << C_RESET << std::endl;
}

const std::string	&Brain::getIdea( unsigned int index ) const
{
	if ( index > 100 )
	{
		std::cout << C_RED << "ERROR\n" << C_DARK_GRAY << "index out of range" << C_RESET << std::endl;
		// return ("h");
	}
	return (_ideas[index]);
}

Brain::~Brain()
{
	std::cout << "Destructor brain called0" << std::endl;
}