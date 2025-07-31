/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:33:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/31 17:10:56 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// std::cout << std::setw(10) << std::right <<

int	main(void)
{
	Phonebook	newBook;
	
	while (1)
	{
		int nb;
		std::cout << "PLEASE ENTER A COMMAND : ";
		std::string command;
		if (!getline(std::cin, command))
		{
			std::cout << "Exiting..." << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			Contact		newContact;
			nb = newContact.Create();
			if (nb == 0)
				newBook.AddContact(newContact);
			else if (std::cin.eof())
			{
				std::cout << "Exiting..." << std::endl;
				break ;
			}

		}
		else if (command == "SEARCH")
		{
			newBook.display();
			std::cout << "PLEASE ENTER THE CONTACT INDEX : ";
			if (!getline(std::cin, command) || std::cin.eof())
			{
				std::cout << "Exiting..." << std::endl;
				break ;
			}
			newBook.search(command);
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
