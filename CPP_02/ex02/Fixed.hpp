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
			Fixed( const Fixed &other );
			Fixed( const int nb );
			Fixed( const float nb );
			
			Fixed&	operator=( const Fixed &other );
			Fixed&	operator++(); // rien car operateur unaire
			Fixed	operator++( int ); // on met int afin de differencier les 2 operateurs +
			Fixed&	operato--();
			Fixed	operator--( int )

			static float	min( float n1, float n2 );
			static float	min( const float n1, const float n2 );
			static float	max( float n1, float n2 );
			static float	max( const float n1, const float n2);
			~Fixed();

			int		getValue() const;
			void	setValue( int );
			float	toFloat() const;
			int		toInt() const;

	private:
			int	_value;
			static const int	_fractionalBits = 8;
};

std::ostream&	operator<<( std::ostream &os, const Fixed &other );

#endif