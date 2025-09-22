/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:28:59 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/19 09:37:56 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void)
{
	int			intArray[] = {1, 2, 3, 4, 5};
	char		charArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::string	strArray[] = {"Hello", "World", "This", "Is", "CPP"};

	std::cout << std::endl << C_YELLOW << "\t\t\t ===== INT ARRAY =====" << C_RESET << std::endl << std::endl;
	iter(intArray, 5, printElement<int>);
	
	std::cout << std::endl << C_YELLOW << "\t\t\t ===== CHAR ARRAY =====" << C_RESET << std::endl << std::endl;
	iter(charArray, 5, printElement<char>);
	
	std::cout << std::endl << C_YELLOW << "\t\t\t ===== STRING ARRAY =====" << C_RESET << std::endl << std::endl;
	iter(strArray, 5, printElement<std::string>);

	return (0);
}