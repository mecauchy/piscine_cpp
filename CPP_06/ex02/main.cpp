/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:21:16 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/17 10:58:52 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate( void );

void	identify( Base *p);
void	identify( Base &p);

int	main( void )
{
	srand(time(0));
	
	Base*	object = generate();
	
	std::cout << C_YELLOW << "\t\t\t ===== IDENTIFY WITH POINTER =====" << C_RESET << std::endl << std::endl;
	identify(object);

	std::cout << std::endl << C_YELLOW << "\t\t\t ===== IDENTIFY WITH REFERENCE =====" << C_RESET << std::endl << std::endl;
	identify(*object);
	delete object;
	return (0);
}