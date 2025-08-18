#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default construcotr called" << std::endl;
}

Dog::Dog( const std::string &name )
{
	type = "Dog";
	std::cout << type << " Parameterized constructor called for " << name << std::endl;
}

Dog::Dog( const Dog &other )
{
	type = "Dog";
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}