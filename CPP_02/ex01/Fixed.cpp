/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:37:16 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/12 14:10:42 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << C_GREEN << "Default Constructor called" << C_RESET << std::endl;
}

Fixed::Fixed( const Fixed &other ): _value(0)
{
	std::cout << C_GREEN << "Copy constructor called" << C_RESET << std::endl;
	*this = other;
}

Fixed::Fixed( const int nb ): _value(0)
{
	std::cout << C_GREEN << "Int constructor called" << C_RESET << std::endl;
	_value = nb * (1 << _fractionalBits);
}

Fixed::Fixed( const float nb ): _value(0)
{
	// man roundf -> permet d'arrondir le float
	std::cout << C_GREEN << "Float constructor called" << C_RESET << std::endl;
	_value = static_cast<int>(roundf(nb * (1 << _fractionalBits)));
}

Fixed& Fixed::operator=( const Fixed &other)
{
	std::cout << C_GREEN << "Copy assignement operator called" << C_RESET << std::endl;
	// verif pour etre sure de ne pas s'auto affecter
	if (this != &other)
		this->_value = other._value;
	return ( *this );
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "[ getRawBits() const member called ]" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw)
{
	std::cout << "[ setRawBits() member called ]" << std::endl;
	_value = raw;
}

float	Fixed::toFloat() const
{
	return ( static_cast<float>(_value) / static_cast<float>(1 << _fractionalBits));
}

int		Fixed::toInt() const
{
	return ( _value >> _fractionalBits );
}

std::ostream&	operator<<(std::ostream &os, const Fixed &other )
{
	os << other.toFloat();
	return ( os );
}