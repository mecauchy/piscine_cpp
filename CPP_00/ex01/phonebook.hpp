#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
	public :
	
	Phonebook( void );
	~Phonebook( void );
	void	AddContact(Contact newContact);
	void	ShowFullContact( void ) const;
	void	search();
	
	private :
	
	int		nbContact;
	Contact _contact[8];
};


#endif