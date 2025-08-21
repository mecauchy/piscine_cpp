#ifndef CURE_HPP

#define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
				Cure();
				Cure( std::string const &type );
				Cure( const Cure &other );
				Cure& operator=( const Cure &other );

				AMateria* clone() const;
				void use(ICharacter& target);

				~Cure();

	private:
				std::string _type;
};

#endif