#ifndef SCALARCONVERTER_HPP

#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <math.h>
#include <limits>
#include <cfloat>
#include <iomanip>

class	ScalarConverter
{
	public :
				static void	convert(const std::string &literal);
				static bool isPseudoLiteral(const std::string &literal);
				static void	printChar(double value);
				static void	printInt(double value);
				static void	printFloat(double value);
				static void	printDouble(double value);

	private :
				ScalarConverter();
				ScalarConverter(const ScalarConverter &other);
				ScalarConverter&	operator=(const ScalarConverter &other);
				~ScalarConverter();
};


#endif