/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:33:38 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/01 18:38:15 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// std::cout << std::setw(10) << std::right <<

int	main(void)
{
	Phonebook	newBook;
	
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
			std::cout
		}
		else if (command == "EXIT")
		{
			
		}
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	}
	return (0);
}
