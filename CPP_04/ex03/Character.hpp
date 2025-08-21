#ifndef CHARACTER_HPP

#define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter
{
	public:
				Character();
				Character(std::string const &name);
				Character(Character const &other);
				Character& operator=(Character const &other);
				
				std::string const &getName() const;
				void equip(AMateria* m);
				void unequip(int idx);
				void use(int idx, ICharacter& target);

				~Character();

	private:
				std::string	_name;
				AMateria*	_inventory[4];
};

#endif