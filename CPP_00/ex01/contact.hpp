#ifndef CONTACT_HPP

# define CONTACT_HPP

# include "header.hpp"

class	Contact 
{
	private :
				std::string _FirstName;
				std::string LastName;
				std::string NickName;
				std::string Phone;
				std::string Secret;

	public :
				Contact(); //-> constructeur
				~Contact();
				void	Create();
				void	Display() const;
				std::string GetShortName(std::string cmd) const;
};

#endif