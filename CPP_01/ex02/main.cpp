/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:06:34 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 11:27:43 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *PTR = &variable;
	std::string ref = variable;
	
	std::cout << std::endl;
	std::cout << "The memory address of the string \t:\t" << &variable << std::endl;
	std::cout << "The memory address held by stringPTR\t:\t" << PTR << std::endl;
	std::cout << "The memory address held by stringREF\t:\t" << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable\t:\t" << variable << std::endl;
	std::cout << "The value pointed to by stringPTR\t:\t" << *PTR << std::endl;
	std::cout << "The value pointed to by stringREF\t:\t" << ref << std::endl;
	std::cout << std::endl;
	return (0);
}