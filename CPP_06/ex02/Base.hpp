/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:24:21 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/17 10:58:15 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP

#define BASE_HPP

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

#define C_RED		"\033[31m"
#define C_YELLOW	"\033[33m"
#define C_RESET		"\033[0m"


class	Base
{
	public :
				virtual ~Base() {};
};

class	A : public Base {};

class	B : public Base { };

class	C : public Base {};

Base	*generate( void );

#endif