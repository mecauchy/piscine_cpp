#ifndef ITER_HPP

#define ITER_HPP

#define C_YELLOW	"\033[33m"
#define C_RESET		"\033[0m"

#include <iostream>
#include <string>

template < typename T, typename F >
void	iter( const T* array, std::size_t length, F f )
{
	for ( std::size_t i = 0; i < length; i++ )
		f(array[i]);
}

template < typename T >
void	printElement( const T& element )
{
	std::cout << element << std::endl;
}

#endif