/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:34:07 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/01 18:35:15 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact( void )
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact( void )
{
	std::cout << "Contact destructor called" << std::endl;
}

void	Contact::Create()
{
	std::cout << "Prenom : ";
	std::getline(std::cin, _FirstName);
	std::cout << "Nom de famille : ";
	std::getline(std::cin, LastName);
	std::cout << "Surnom : ";
	std::getline(std::cin, NickName);
	std::cout << "Numero de telephone :";
	std::getline(std::cin, Phone);
	std::cout << "Son plus lourd secret : ";
	std::getline(std::cin, Secret);
	if (_FirstName.empty() || LastName.empty() || NickName.empty() || Phone.empty() || Secret.empty())
		return ;
}

std::string	Contact::GetShortName( std::string cmd ) const
{
	if (cmd.length() > 10)
		return (cmd.substr(0, 9) + ".");
	else
		return (cmd);
}