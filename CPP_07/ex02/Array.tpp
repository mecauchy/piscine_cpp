#ifndef ARRAY_TPP

#define ARRAY_TPP

#include "Array.hpp"

template < typename T >
Array<T>::Array() : _data(NULL), _size(0)
{
}

template < typename T >
Array<T>::Array(unsigned int n) : _data(NULL), _size(n)
{
	if (n == 0)
		_data = NULL;
	else
		_data = new T[n]();
}

template < typename T >
Array<T>::Array(const Array &other) : _data(NULL), _size(other.size())
{
	if (_size == 0)
		_data = NULL;
	else
	{
		_data = new T[_size];
		for (std::size_t i = 0; i < _size; i++)
			_data[i] = other._data[i];
	}
}
template < typename T >
Array<T>&	Array<T>::operator=(const Array &other)
{
	
}

#endif