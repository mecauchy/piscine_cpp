#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const std::string &name )
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " Parameterized constructor called for " << name << std::endl;
}

Dog::Dog( const Dog &other ) : Animal( other )
{
	_type = other._type;
	_brain = new Brain( *other._brain );
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog &other )
{
	if ( this != &other )
		Animal::operator=(other);
	if ( _brain )
		delete _brain;
	_brain = new Brain( *other._brain );
	return ( *this );
}

void	Dog::makeSound() const
{
	std::cout << "Woaf" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return ( _brain );
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}