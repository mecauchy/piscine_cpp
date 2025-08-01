/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:38:37 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/01 09:43:06 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iomanip>

Phonebook::Phonebook( void ) : nbContact(0)
{
}

Phonebook::~Phonebook()
{
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
	int	index = 0;
	int	max = (nbContact < 8) ? nbContact : 8;
	int	startIndex = (nbContact -1) % 8;

	while (i < max)
	{
		index = (startIndex - i + 8) % 8;
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << GetShortName( _contact[index].getFirstName() );
		std::cout << "|";
		std::cout << GetShortName( _contact[index].getLastName() );
		std::cout << "|";
		std::cout << GetShortName( _contact[index].getNickName() );
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
