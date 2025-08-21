/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:43:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/19 16:14:27 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP

#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{
	public:
				WrongAnimal();
				WrongAnimal( const WrongAnimal &other );
				
				WrongAnimal&	operator=( const WrongAnimal &other );
				void		makeSound() const;
				
				~WrongAnimal();

	protected:
				std::string	_type;
};

#endif