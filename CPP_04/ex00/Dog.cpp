#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const std::string &name )
{
	_type = "Dog";
	std::cout << _type << " Parameterized constructor called for " << name << std::endl;
}

Dog::Dog( const Dog &other ) : Animal( other )
{
	_type = "Dog";
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog &other )
{
	if ( this != &other )
		Animal::operator=(other);
	return ( *this );
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}