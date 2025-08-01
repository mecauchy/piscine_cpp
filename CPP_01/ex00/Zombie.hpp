/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:30:28 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/01 14:10:19 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
		private:
					std::string name;
		public:
					Zombie(std::string name);
					~Zombie();
					void announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif