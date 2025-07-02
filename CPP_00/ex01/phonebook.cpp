#include "header.hpp"

Phonebook::Phonebook( void ) : nbContact(0)
{
	std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
}

void	Phonebook::AddContact(Contact newContact)
{
	if (nbContact < 8)
	{
		this->_contact[this->nbContact] = newContact;
		nbContact++;
	}
	else
	{
		this->_contact[this->nbContact % 8] = newContact;
	}
}

void	Phonebook::search( void )
{
	int	i = 0;

	while (i < nbContact)
	{
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getName );
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getName );
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getName );
		std::cout << "|";
		std::cout << GetShortName( _contact[i].getName );
		std::cout << "|";
	}
}