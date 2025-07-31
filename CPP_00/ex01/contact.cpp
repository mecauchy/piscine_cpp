/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:34:07 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/31 17:11:35 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact( void )
{
	// std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact( void )
{
	// std::cout << "Contact destructor called" << std::endl;
}

/*
	cree le contact avec toutes les informations requise
		-> return si champ manquant.
*/

int	Contact::Create()
{
	std::cout << "Prenom : ";
	if (!std::getline(std::cin, _firstName) || std::cin.eof())
		return (1);
	// std::getline(std::cin, _firstName);
	std::cout << "Nom de famille : ";
	if (!std::getline(std::cin, _lastName) || std::cin.eof())
		return (1);
	// std::getline(std::cin, _lastName);
	std::cout << "Surnom : ";
	if (!std::getline(std::cin, _nickName) || std::cin.eof())
		return (1);
	// std::getline(std::cin, _nickName);
	std::cout << "Numero de telephone :";
	if (!std::getline(std::cin, _phoneNumber) || std::cin.eof())
		return (1);
	// std::getline(std::cin, _phoneNumber);
	std::cout << "Son plus lourd secret : ";
	if (!std::getline(std::cin, _darkestSecret) || std::cin.eof())
		return (1);
	// std::getline(std::cin, _darkestSecret);
	if (_firstName.empty() || _lastName.empty() || _nickName.empty() || _phoneNumber.empty() || _darkestSecret.empty())
	{
		std::cout << "Contact not added, please try again." << std::endl;
		return (1);
	}
	return (0);
}

/*
	gerer les champs d'affichage
		->	verifier qu'on ne depasse pas 10 char
		->	aliger le texte a droite
		-> si trop long, tronquer et finir par '.'
*/

std::string	GetShortName( std::string cmd )
{
	if (cmd.length() > 10)
		return (cmd.substr(0, 9) + ".");
	else
		return ( std::string(10 - cmd.length(), ' ') + cmd);
}

void	Contact::displayFullContact( void ) const
{
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nick name : " << this->_nickName << std::endl;
	std::cout << "Phone number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->_darkestSecret << std::endl;
}