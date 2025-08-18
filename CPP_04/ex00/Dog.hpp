/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:41:45 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/17 14:58:12 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP 

# include "Animal.hpp"

class	Dog : public Animal
{
	public:
				Dog();
				Dog( const std::string &name );
				Dog( const Dog &other );
				Dog&	operator=( const Dog &other );
				~Dog();
};

#endif