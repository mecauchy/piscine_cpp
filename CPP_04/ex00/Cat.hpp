/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:41:42 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/17 14:58:06 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP 

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
				Cat();
				Cat( const std::string &name );
				Cat( const Cat &other );
				Cat&	operator=( const Cat &other );
				~Cat();
};

#endif