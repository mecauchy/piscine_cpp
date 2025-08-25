/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 12:03:56 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/23 14:21:11 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	brice("Brice", 2);
	Bureaucrat	melissa("melissa", 1);
	Bureaucrat	Alo("Alo", 99);
	Bureaucrat	bby("bby", 78);
	

	std::cout << brice << std::endl;
	std::cout << melissa << std::endl;
	std::cout << Alo << std::endl;
	std::cout << bby << std::endl;

	try
	{
		Bureaucrat	Ool("ool", -33);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Testo("testo", 699);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		brice.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		melissa.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}