/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:38:35 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/08/10 18:06:16 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP

# define TEST_HPP

#include <string>
#include <iostream>
#include <cmath>

class	Vector
{
	public:
			double	_vX;
			double	_vY;
			Vector();
			Vector( double x, double y );
			void	display( void );
};

#endif