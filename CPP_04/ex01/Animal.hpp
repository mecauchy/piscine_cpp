/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:15:33 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/22 09:48:42 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

# include <string>
# include <iostream>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class	Animal
{
	public:
				Animal();
				Animal( const std::string &name );
				Animal( const Animal &other );
				Animal&	operator=( const Animal &other );
				const std::string& getType() const;
				virtual ~Animal();

				virtual void	makeSound() const = 0;

	protected:
				std::string	_type;
};

#endif