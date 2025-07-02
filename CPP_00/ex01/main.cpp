/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:33:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 11:17:18 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// std::cout << std::setw(10) << std::right <<

int	main(void)
{
	Phonebook	newBook;
	// int			nb;
	
	while (1)
	{
		std::cout << "PLEASE ENTER A COMMAND : ";
		std::string command;
		getline(std::cin, command);
		if (command == "ADD")
		{
			Contact		newContact;
			newContact.Create();
			newBook.AddContact(newContact);
		}
		else if (command == "SEARCH")
		{
			newBook.display();
			std::cout << "PLEASE ENTER THE CONTACT INDEX : ";
			getline(std::cin, command);
			newBook.search(command);
			// nb = command[0 - '0'];
			// newBook[nb].displayFullContact();
		}
		else if (command == "EXIT")
		{
			break ;
		}
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	}
	return (0);
}
