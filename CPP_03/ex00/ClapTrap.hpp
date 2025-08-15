#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class ClapTrap
{
	public:
				ClapTrap();
				ClapTrap( const std::string &name );
				ClapTrap( const ClapTrap &other );
				ClapTrap&	operator=( const ClapTrap &other );
				
				void		attack( const std::string& target );
				void		takeDamage( unsigned int amount );
				void		beRepaired( unsigned int amount );

				int			getHitPoints();
				
				~ClapTrap();

	private:
				std::string _name;
				unsigned int _hitPoints;
				unsigned int _energyPoints;
				unsigned int _attackDamage;
};

#endif