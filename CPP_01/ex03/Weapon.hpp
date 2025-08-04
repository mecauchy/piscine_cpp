/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:59:01 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 14:40:21 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

#define WEAPON_HPP

#include <string>

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