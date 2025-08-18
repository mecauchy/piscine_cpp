#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &other);
			FragTrap &operator=(const FragTrap &other);
			void	highFivesGuys( void );

			~FragTrap();
};

#endif