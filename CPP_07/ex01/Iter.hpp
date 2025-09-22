#ifndef ITER_HPP

#define ITER_HPP

#define C_YELLOW	"\033[33m"
#define C_RESET		"\033[0m"

#include <iostream>
#include <string>

template < typename T, typename F >
void	iter(  T* array, std::size_t lenght, F f )
{
	for ( std::size_t i = 0; i < lenght; i++ )
		f(array[i]);
}


template < typename T >
void	printElement( T element )
{
	std::cout << element << std::endl;
}
#endif