/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:33:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 13:21:53 by mcauchy-         ###   ########.fr       */
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
		getline(std::cin, command);
		if (command == "ADD")
		{
			Contact		newContact;
			nb = newContact.Create();
			if (nb == 0)
				newBook.AddContact(newContact);
		}
		else if (command == "SEARCH")
		{
			newBook.display();
			std::cout << "PLEASE ENTER THE CONTACT INDEX : ";
			getline(std::cin, command);
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
