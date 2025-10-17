#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iostream>

class RPN 
{
	public:
			int evaluate(const std::string& expression);
};

#endif