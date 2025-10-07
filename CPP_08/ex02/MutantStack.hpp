#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>
# include <stack>
# include <deque>
# include <iostream>

std::stck<int> s;

template <typename T>
class MutantStack : public std::stack<T>
{

};


#endif