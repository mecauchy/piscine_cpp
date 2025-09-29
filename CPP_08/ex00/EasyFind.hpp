#ifndef EASYFIND_HPP

#define EASYFIND_HPP

#define C_RED "\033[1;31m"
#define C_GREEN "\033[1;32m"
#define C_YELLOW "\033[1;33m"
#define C_RESET "\033[0m"

#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <string>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return ( it );
}

#endif