/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:46:30 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/12 13:46:31 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << C_GREEN << "Default Constructor called" << C_RESET << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << C_GREEN << "Copy Constructor called" << C_RESET << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	std::cout << C_GREEN << "Copy assignement operator called" << C_RESET << std::endl;
	// verif pour etre sure de ne pas s'auto affecter
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return ( *this );
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "[ getRawBits member called ]" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw)
{
	std::cout << "[ setRawBits member called ]" << std::endl;
	_value = raw;
}