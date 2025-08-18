/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:59:00 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/15 16:59:49 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP

#define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap( const std::string &name );
			ScavTrap( const ScavTrap &other );
			ScavTrap& operator=( const ScavTrap &other );
			
			void	guardGate();
			void	attack( const std::string& target );

			~ScavTrap();
			
	private:
};


#endif