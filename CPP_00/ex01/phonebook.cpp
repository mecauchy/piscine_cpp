/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:38:37 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 11:35:40 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iomanip>

Phonebook::Phonebook( void ) : nbContact(0)
{
	std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
}

void	Phonebook::AddContact(Contact newContact)
{
	if (nbContact < 8)
	{
		this->_contact[this->nbContact] = newContact;
	}
	else
	{
		this->_contact[this->nbContact % 8] = newContact;
	}
	nbContact++;
	std::cout << "NOMBRE CONTACT [" << nbContact << "]" << std::endl;
}

std::string	Contact::getFirstName() const
{
	return  ( this->_firstName );
}

std::string	Contact::getLastName() const
{
	return  ( this->_lastName );
}

std::string	Contact::getNickName() const
{
	return  ( this->_nickName );
}

void	Phonebook::display( void )
{
	int	i = 0;
	int	max = (nbContact < 8) ? nbContact : 8;

	while (i < max)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getFirstName() );
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getLastName() );
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getNickName() );
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}

void	Phonebook::search( std::string command )
{
	std::string input;
	int			nb = 0;
	int			max = (nbContact < 8) ? nbContact : 8;

	if (command.length() != 1 || !isdigit(command[0]))
	{
		std::cout << "INVALID INDEX" << std::endl;
		return ;
	}
	nb = command[0] - '0';
	if (nb < 0 || nb >= max)
	{
		std::cout << "NO CONTACT AT THIS INDEX" << std::endl;
		return ;
	}
	this->_contact[nb].displayFullContact();
	_index = nb;
}
