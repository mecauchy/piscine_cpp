/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:14:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/04 10:43:13 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <string>

// oblige de cree un constructeur par defaut pour pouvoir creer 
// un tableau de Zombie[N]

class Zombie 
{
			public:
					Zombie();
					Zombie(std::string name);
					~Zombie();
					void announce() const;
					void setName(const std::string &name);
			private:
					std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif