/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:15:33 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/17 15:13:55 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	public:
				Animal();
				Animal( const std::string &name );
				Animal( const Animal &other );
				Animal&	operator=( const Animal &other );
				// std::string& getType( void );
				const std::string& getType();
				~Animal();

				void	makeSound();

	protected:
				std::string	type;
};

#endif