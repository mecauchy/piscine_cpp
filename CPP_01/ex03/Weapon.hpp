/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:59:01 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/05 11:33:08 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

#define WEAPON_HPP

#define C_RESET	"\033[0m"
#define C_RED	"\033[1;31m"
#define C_GREEN	"\033[1;32m"
#define C_YELLOW "\033[1;33m"
#define C_BLUE	"\033[1;34m"

#include <string>
#include <iostream>

class Weapon
{
	public:
				Weapon();
				Weapon( std::string type );
				~Weapon();
				
				std::string& getType( void );
				void setType( const std::string& type );
	private:
				std::string _type;
};

#endif