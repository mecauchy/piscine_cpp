#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << C_DARK_GRAY << "Dog default constructor called" << C_RESET << std::endl;
}

Dog::Dog( const std::string &name )
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << C_DARK_GRAY << _type << " Parameterized constructor called for " << name << C_RESET << std::endl;
}

Dog::Dog( const Dog &other ) : AAnimal( other )
{
	_type = "Dog";
	_brain = new Brain( *other._brain );
	std::cout << C_DARK_GRAY << "Dog Copy constructor called" << C_RESET << std::endl;
}

Dog&	Dog::operator=( const Dog &other )
{
	if ( this != &other )
		AAnimal::operator=(other);
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
	std::cout << C_RED << "Dog destructor called and _brain has been destroyed" << C_RESET << std::endl;
}