/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:16:09 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/16 18:20:15 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./scalar_converter <literal_value>" << std::endl;
		return 1;
	}
	double value = DBL_MAX;
	ScalarConverter::convert(av[1]);
	return (0);
}