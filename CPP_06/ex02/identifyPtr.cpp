/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyPtr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:48:59 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/17 10:58:02 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void	identify( Base *p )
{
	if ( dynamic_cast<A*>(p) )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "C" << std::endl;
	else
		std::cout << C_RED << "Unknown type" << std::endl;
}