/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:38:25 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 11:07:57 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include "header.hpp"

class	Contact 
{
	public :
				Contact(); //-> constructeur
				~Contact();
				void	Create();
				void	displayFullContact( void ) const;
				std::string getFirstName() const;
				std::string getLastName() const;
				std::string getNickName() const;

	private :
				std::string _firstName;
				std::string _lastName;
				std::string _nickName;
				std::string _phoneNumber;
				std::string _darkestSecret;
};

#endif