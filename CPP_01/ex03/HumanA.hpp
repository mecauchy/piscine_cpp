/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:21:46 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:32:21 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define C_RESET "\033[0m"
#define C_RED   "\033[1;31m"
#define C_GREEN "\033[1;32m"
#define C_YELLOW "\033[1;33m"
#define C_BLUE  "\033[1;34m"

class HumanA
{
	public:
				HumanA( std::string name, Weapon &ref);
				~HumanA( void );

				void	attack( void ) const;

	private:
				std::string	_name;
				Weapon		&_arm;
};
			

#endif