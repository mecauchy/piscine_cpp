#ifndef CONTACT_HPP

# define CONTACT_HPP

# include "header.hpp"

class	Contact 
{
	public :
				Contact(); //-> constructeur
				~Contact();
				void	Create();
				std::string getFirstName() const;
				std::string getLastName() const;
				std::string getNickName() const;
				std::string GetShortName(std::string cmd) ;

	private :
				std::string _firstName;
				std::string _lastName;
				std::string _nickName;
				std::string _phone;
				std::string _secret;
};

#endif