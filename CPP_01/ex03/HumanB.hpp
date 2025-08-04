/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:45:26 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 14:59:48 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	public:
				HumanB();
				HumanB( std::string weapon );
				~HumanB();
	private:
				std::string _nameB;
				std::string _weaponB;
};

#endif