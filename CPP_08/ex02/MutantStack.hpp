#ifndef MUTANTSTACK_HPP

#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <string>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;

		MutantStack() : stack() {}
		MutantStack(const MutantStack& other) : stack(other) {}
		MutantStack& operator=(const MutantStack& other) {
			std::stack<T>::operator=(other);
			return ( *this );
		}
		~MutantStack() {}

		iterator begin()
		{
			return ( this->c.begin() );
		}

		iterator end()
		{
			return ( this->c.end() );
		}
};

#endif