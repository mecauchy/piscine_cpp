#ifndef AMATERIA_HPP

#define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_BLUE "\033[0;34m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class AMateria
{
	public:
				AMateria();
				AMateria( std::string const &type );
				AMateria( const AMateria &other );

				AMateria&	operator=( const AMateria &other );
				std::string const	&getType() const;

				virtual	AMateria*	clone() const = 0;
				virtual void		use( ICharacter& target );

				virtual ~AMateria();
	
	protected:

				std::string _type;
};

#endif