#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap( "FragTrap" )
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap( name )
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Parameterized constructor called for " << _name << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap( other )
{
	std::cout << "FragTrap Copy constructor called for " << _name << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap &other )
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return ( *this );
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << _name << " ask everyone to do a high fives with him" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
}