#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << C_DARK_GRAY << "\tCure default constructor called\t\t\t" << C_RESET << std::endl; 
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << C_DARK_GRAY << "\tCure Parameterized constructor called with type: " << type << "" << C_RESET << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << C_DARK_GRAY << "\tCure copy constructor called\t\t\t" << C_RESET << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
		AMateria::operator=(other);
	return ( *this );
}

AMateria* Cure::clone() const
{
	return ( new Cure(*this) );
}

void Cure::use(ICharacter& target)
{
	std::cout << C_GREEN << "* heals " << target.getName() << "'s wounds *" << C_RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << C_DARK_GRAY << "\tCure destructor called\t\t\t\t" << C_RESET << std::endl;
}