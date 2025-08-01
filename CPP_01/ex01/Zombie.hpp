/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:14:08 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/01 17:20:24 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
			public:
					Zombie(std::string name);
					~Zombie();
					void announce() const;
			private:
					std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
