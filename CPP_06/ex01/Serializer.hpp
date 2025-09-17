#ifndef SERIALIZER_HPP

#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>
#include <string>
#include "Data.hpp"

#define C_YELLOW	"\033[33m"
#define C_RESET		"\033[0m"

class	Serializer
{
	public :
				static uintptr_t	serialize(Data* ptr);
				static Data*		deserialize(uintptr_t raw);

	private :
				Serializer();
				Serializer(const Serializer &other);
				Serializer&	operator=(const Serializer &other);
				~Serializer();
};

#endif