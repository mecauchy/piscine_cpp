/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:15:33 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/20 15:28:59 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

#define AANIMAL_HPP

# include <string>
# include <iostream>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class	AAnimal
{
	public:
				AAnimal();
				AAnimal( const std::string &name );
				AAnimal( const AAnimal &other );
				AAnimal&	operator=( const AAnimal &other );
				const std::string& getType() const;
				virtual ~AAnimal();

				virtual void	makeSound() const;

	protected:
				std::string	_type;
};

#endif