/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:38:04 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/10 18:07:24 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Vector::Vector()
{
}

Vector::Vector( double x, double y )
{
	_vX = x;
	_vY = y;
	std::cout << "Construtor called" << std::endl;
}

void	Vector::display( void )
{
	std::cout << _vY << " - " << _vX << std::endl;
}

int	main( void )
{
	Vector	v1(3.4, 6.6);
	v1.display();
	return (0);
}