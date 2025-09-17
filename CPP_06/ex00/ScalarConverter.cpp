/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:13:10 by mcauchy-          #+#    #+#             */
/*   Updated: 2025/09/16 16:52:14 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other; // No member variables to copy
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other; // No member variables to copy
	return *this;
}


/*
	un pseudo-literal est une representation speciale des valeurs flottantes (float et double)
	qui ne correspondent pas a des nombres reels mais des etats particuliers.
	nan : Not a Number, represente une valeur indefinie ou non representable.
	+inf : Positive Infinity, represente une valeur infiniment grande.
	-inf : Negative Infinity, represente une valeur infiniment petite.
	nanf, +inff, -inff : versions float de nan, +inf, -inf.
*/
bool	ScalarConverter::isPseudoLiteral(const std::string &literal)
{
	return (literal == "nan" || literal == "+inf" || literal == "-inf" ||
			literal == "nanf" || literal == "+inff" || literal == "-inff");
}

void	ScalarConverter::printChar(double value)
{
	if (value < 0 || value > 127 || isnan(value))
		std::cout << "char\t:\timpossible" << std::endl;
	else if (isprint(static_cast<int>(value)))
		std::cout << "char\t:\t'" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char\t:\tNon displayable" << std::endl;
}
void	ScalarConverter::printInt(double value)
{
	if (value < -2147483648 || value > 2147483647 || isnan(value))
		std::cout << "int\t:\timpossible" << std::endl;
	else
		std::cout << "int\t:\t" << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::printFloat(double value)
{
	float fValue = static_cast<float>(value);
	std::cout << "float\t:\t";
	if (isnan(fValue))
		std::cout << "nanf" << std::endl;
	else if (isinf(fValue))
	{
		if (fValue > 0)
			std::cout << "+inff" << std::endl;
		else
			std::cout << "-inff" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1) << fValue << "f" << std::endl;
	}
}

void	ScalarConverter::printDouble(double value)
{
	std::cout << "double\t:\t";
	if (isnan(value))
		std::cout << "nan" << std::endl;
	else if (isinf(value))
	{
		if (value > 0)
			std::cout << "+inf" << std::endl;
		else
			std::cout << "-inf" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1) << value << std::endl;
	}
}

void	ScalarConverter::convert( const std::string &literal )
{
	if (isPseudoLiteral(literal))
	{
		std::cout << "char\t:\timpossible" << std::endl;
		std::cout << "int\t:\timpossible" << std::endl;
		if (literal[literal.length() - 1] == 'f')
		{
			std::cout << "float\t:\t" << literal << std::endl;
			std::cout << "double\t:\t" << literal.substr(0, literal.length() - 1) << std::endl;
		}
		else
		{
			std::cout << "float\t:\t" << literal << "f" << std::endl;
			std::cout << "double\t:\t" << literal << std::endl;
		}
		return ;
	}
	char *endPtr;
	double value = strtod(literal.c_str(), &endPtr);
	if (*endPtr != '\0' && !(*endPtr == 'f' && *(endPtr + 1) == '\0'))
	{
		std::cerr << "Error : Invalid literal format." << std::endl;
		return ;
	}
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}

ScalarConverter::~ScalarConverter() {}