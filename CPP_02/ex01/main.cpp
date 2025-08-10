#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getValue() << std::endl;
	std::cout << b.getValue() << std::endl;
	std::cout << c.getValue() << std::endl;
	return 0;
}