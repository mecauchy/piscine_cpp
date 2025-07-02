/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:34:07 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 09:10:07 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/*
	Constructeur Contact
*/

Contact::Contact( void )
{
	std::cout << "Contact constructor called" << std::endl;
}

/*
	Destructeur Contact
*/

Contact::~Contact( void )
{
	std::cout << "Contact destructor called" << std::endl;
}

/*
	cree le contact avec toutes les informations requise
		-> return si champ manquant.
*/

void	Contact::Create()
{
	std::cout << "Prenom : ";
	std::getline(std::cin, _firstName);
	std::cout << "Nom de famille : ";
	std::getline(std::cin, _lastName);
	std::cout << "Surnom : ";
	std::getline(std::cin, _nickName);
	std::cout << "Numero de telephone :";
	std::getline(std::cin, _phone);
	std::cout << "Son plus lourd secret : ";
	std::getline(std::cin, _secret);
	if (_firstName.empty() || _lastName.empty() || _nickName.empty() || _phone.empty() || _secret.empty())
		return ;
}

/*
	gerer les champs d'affichage
		->	verifier qu'on ne depasse pas 10 char
		->	aliger le texte a droite
		-> si trop long, tronquer et finir par '.'
*/

std::string	Contact::GetShortName( std::string cmd )
{
	if (cmd.length() > 10)
		return (cmd.substr(0, 9) + ".");
	else
		return ( std::string((10 - cmd.length(), ' ') + cmd));
}
