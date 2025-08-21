/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:31:29 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/21 14:31:30 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

#define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
				Ice();
				Ice( std::string const &type);
				Ice( Ice const &other );
				Ice&	operator=( const Ice &other );

				AMateria*	clone() const ;
				void		use( ICharacter& target );

				~Ice();

	private:
				std::string	_type;
};

#endif