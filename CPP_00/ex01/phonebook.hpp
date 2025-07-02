/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:38:41 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/07/02 11:02:37 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
	public :
	
	Phonebook( void );
	~Phonebook( void );
	void	AddContact(Contact newContact);
	void	display();
	void	search( std::string command );
	
	private :
	
	int		nbContact;
	int		_index;
	Contact _contact[8];
};


#endif