/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:32:48 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/12 14:32:21 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	std::cout << C_YELLOW << "=== TEST CONSTRUCTEURS ===" << C_RESET << std::endl << std::endl;
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	
	std::cout << C_YELLOW << "\n=== TEST OPERATEURS ARITHMETIQUES ===" << C_RESET << std::endl << std::endl;
	Fixed x(10.5f);
	Fixed y(3.2f);
	
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "x + y = " << (x + y) << std::endl;
	std::cout << "x - y = " << (x - y) << std::endl;
	std::cout << "x * y = " << (x * y) << std::endl;
	std::cout << "x / y = " << (x / y) << std::endl;
	
	std::cout << C_YELLOW << "\n=== TEST INCREMENTATION/DECREMENTATION ===" << C_RESET << std::endl << std::endl;
	Fixed z(5);
	std::cout << "z initial = " << z << std::endl;
	std::cout << "++z = " << ++z << std::endl;
	std::cout << "z = " << z << std::endl;
	std::cout << "z++ = " << z++ << std::endl;
	std::cout << "z = " << z << std::endl;
	std::cout << "--z = " << --z << std::endl;
	std::cout << "z = " << z << std::endl;
	std::cout << "z-- = " << z-- << std::endl;
	std::cout << "z = " << z << std::endl;

	std::cout << C_YELLOW << "\n=== TEST OPERATEURS DE COMPARAISON ===" << C_RESET << std::endl << std::endl;
	Fixed m(8.5f);
	Fixed n(3.2f);
	
	std::cout << "m = " << m << ", n = " << n << std::endl;
	std::cout << "m > n = " << (m > n) << std::endl;
	std::cout << "m < n = " << (m < n) << std::endl;
	std::cout << "m >= n = " << (m >= n) << std::endl;
	std::cout << "m <= n = " << (m <= n) << std::endl;
	std::cout << "m == n = " << (m == n) << std::endl;
	std::cout << "m != n = " << (m != n) << std::endl;

	std::cout << C_YELLOW << "\n=== TEST FONCTIONS MIN/MAX ===" << C_RESET << std::endl << std::endl << std::endl;
	Fixed p(15.5f);
	Fixed q(20.2f);
	
	std::cout << "p = " << p << ", q = " << q << std::endl;
	std::cout << "Fixed::min(p, q) = " << Fixed::min(p, q) << std::endl;
	std::cout << "Fixed::max(p, q) = " << Fixed::max(p, q) << std::endl;
	
	// Test avec des constantes
	const Fixed r(100.1f);
	const Fixed s(50.5f);
	std::cout << "r = " << r << ", s = " << s << std::endl;
	std::cout << "Fixed::min(r, s) = " << Fixed::min(r, s) << std::endl;
	std::cout << "Fixed::max(r, s) = " << Fixed::max(r, s) << std::endl;

	std::cout << C_YELLOW << "\n=== TEST ORIGINAL DU SUJET ===" << C_RESET << std::endl << std::endl;
	Fixed original_a;
	Fixed const original_b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << original_a << std::endl;
	std::cout << ++original_a << std::endl;
	std::cout << original_a << std::endl;
	std::cout << original_a++ << std::endl;
	std::cout << original_a << std::endl;
	std::cout << original_b << std::endl;
	std::cout << Fixed::max( original_a, original_b ) << std::endl;
	
	std::cout << std::endl;
	return (0);
}