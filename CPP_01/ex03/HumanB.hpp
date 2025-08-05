/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:45:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:32:36 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

#define HUMANB_HPP

#define C_RESET "\033[0m"
#define C_RED   "\033[1;31m"
#define C_GREEN "\033[1;32m"
#define C_YELLOW "\033[1;33m"
#define C_BLUE  "\033[1;34m"

#include "Weapon.hpp"

class HumanB
{
	public:
				HumanB();
				HumanB( std::string name );
				~HumanB();
				
				void	attack( void ) const;
				Weapon	*getWeapon( void ) const;
				void	setWeapon(Weapon &arm);

	private:
				std::string	_nameB;
				Weapon		*_arm;
};

#endif