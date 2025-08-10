#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << C_GREEN << "Constructor called" << C_RESET << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << C_GREEN << "Copy constructor called" << C_RESET << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	std::cout << C_GREEN << "Copy assignement called" << C_RESET << std::endl;
	// verif pour etre sure de ne pas s'auto affecter
	if (this != &other)
		this->_value = other._value;
	return ( *this );
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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