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

			Fixed&	operator--();
			Fixed	operator--( int ); // utilisation de tmp donc par de ref en retour 

			Fixed	operator*( const Fixed &other );
			Fixed	operator/( const Fixed &other );
			Fixed	operator+( const Fixed &other );
			Fixed	operator-( const Fixed &other );

			bool	operator>( const Fixed &other ) const;
			bool	operator<( const Fixed &other ) const;
			bool	operator>=( const Fixed &other ) const;
			bool	operator<=( const Fixed &other ) const;
			bool	operator==( const Fixed &other ) const;
			bool	operator!=( const Fixed &other ) const;

			static Fixed&	min( Fixed &n1, Fixed &n2 );
			static const Fixed&	min( const Fixed &n1, const Fixed &n2 );
			static Fixed&	max( Fixed &n1, Fixed &n2 );
			static const Fixed&	max( const Fixed &n1, const Fixed &n2 );

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