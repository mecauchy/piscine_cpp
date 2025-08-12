/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:10:23 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/12 14:32:58 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << C_GREEN << "Constructor called" << C_RESET << std::endl;
}

Fixed::Fixed( const Fixed &other ): _value(0)
{
	// std::cout << C_GREEN << "Copy constructor called" << C_RESET << std::endl;
	*this = other;
}

Fixed::Fixed( const int nb ): _value(0)
{
	_value = nb * (1 << _fractionalBits);
}

Fixed::Fixed( const float nb ): _value(0)
{
	// man roundf -> permet d'arrondir le float
	_value = static_cast<int>(roundf(nb * (1 << _fractionalBits)));
}

Fixed& Fixed::operator=( const Fixed &other)
{
	// std::cout << C_GREEN << "Copy assignement called" << C_RESET << std::endl;
	// verif pour etre sure de ne pas s'auto affecter
	if (this != &other)
		this->_value = other._value;
	return ( *this );
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << C_RESET << std::endl;
}

int		Fixed::getValue() const
{
	std::cout << "[ getValue member called ]" << std::endl;
	return (_value);
}

void	Fixed::setValue( int value)
{
	_value = value;
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

Fixed&	Fixed::operator++( )
{
	this->_value++;
	return ( *this );
}

// On retourne une copie de la valer *this, on incremente value
Fixed Fixed::operator++( int )
{
	Fixed	tmp( *this );
	
	this->_value++;
	return ( tmp );
}

Fixed&	Fixed::operator--()
{
	this->_value--;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this ); 
	this->_value--;
	return ( tmp );
}

Fixed	Fixed::operator*( const Fixed &other )
{
	Fixed	tmp;
	tmp._value = (this->_value * other._value) >> _fractionalBits;
	return ( tmp );
}

Fixed	Fixed::operator/( const Fixed &other )
{
	Fixed	tmp;
	tmp._value = ( this->_value << _fractionalBits ) / other._value;
	return ( tmp );
}

Fixed	Fixed::operator+( const Fixed &other )
{
	Fixed	tmp;
	tmp._value = this->_value + other._value;
	return ( tmp );
}

Fixed	Fixed::operator-( const Fixed &other )
{
	Fixed	tmp;
	tmp._value = this->_value - other._value;
	return ( tmp );
}

bool	Fixed::operator>( const Fixed &other ) const
{
	return ( this->_value > other._value );
}

bool	Fixed::operator>=( const Fixed &other ) const
{
	return ( this->_value >= other._value );
}

bool	Fixed::operator<( const Fixed &other ) const
{
	return ( this->_value < other._value );
}

bool	Fixed::operator<=( const Fixed &other ) const
{
	return ( this->_value <= other._value );
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return ( this->_value == other._value );
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return ( this->_value != other._value );
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	return ( a < b ? a : b );
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return ( a < b ? a : b );
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return ( a > b ? a : b );
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return ( a > b ? a : b );
}