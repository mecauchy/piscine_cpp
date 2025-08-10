/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:37:28 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/07 14:13:56 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H

#define HARL_H

#include <string>
#include <iostream>

#define C_RESET "\033[0m"
#define C_RED   "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[1;33m"

class Harl
{
	public:
				Harl();
				~Harl();

				void complain( std::string level );
	private:
				void debug();
				void info();
				void warning();
				void error();
};

#endif