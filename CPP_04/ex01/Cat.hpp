/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:41:42 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/20 15:29:13 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP 

# include "Animal.hpp"
# include "Brain.hpp"

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"
#define C_DARK_GRAY "\033[90m"
#define C_LIGHT_GRAY "\033[37m"

class	Cat : public Animal
{
	public:
				Cat();
				Cat( const std::string &name );
				Cat( const Cat &other );
				Cat&	operator=( const Cat &other );
				
				void	makeSound() const;
				Brain	*getBrain() const;

				~Cat();

	private:
				Brain	*_brain;
};

#endif