#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"

class Fixed
{
	public:
			Fixed();
			Fixed( const Fixed &other);
			Fixed& operator=( const Fixed &other);
			~Fixed();

			int		getValue() const;
			void	setValue( int );
	private:
			int	_value;
			static const int	fractionalBits = 8;

};


#endif