#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <cstring>
#include <cstddef>


#define C_RED		"\033[31m"
#define C_YELLOW	"\033[33m"
#define C_RESET		"\033[0m"

template < typename T >
class Array
{
	public :
				Array();
				explicit Array(unsigned int n);
				Array(const Array &other);
				Array&	operator=(const Array &other);
				~Array();

				T&		operator[](std::size_t index);
				const T&	operator[](std::size_t index) const;
				std::size_t	size() const;

	private :
				T*				_data;
				std::size_t		_size;
};

#include "Array.tpp"

#endif