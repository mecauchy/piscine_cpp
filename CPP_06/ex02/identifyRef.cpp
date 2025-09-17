/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyRef.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:26:59 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/17 11:00:46 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/*
	Avec une reference, si la conversion reussit alors on obtient une reference valide
	Si la conversion echoue, on ne peut pas donner une reference nulle donc une exeption est appele 
	La reference doit tjrs referencer sur quelque chose contrairement au ptr
*/

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(std::bad_cast&)
	{}
	
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast&)
	{}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast&)
	{}
	
	std::cout << C_RED << "Unknown type" << C_RESET << std::endl;
}