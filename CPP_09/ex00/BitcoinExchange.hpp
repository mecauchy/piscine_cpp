#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iomanip>

class BitcoinExchange
{
	public:

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void loadData(const std::string& filename);
		void processInput(const std::string& filename) ;

	private:
	
		std::map<std::string, double> _data;
		void trim(std::string& str);
		bool isValidDate(const std::string& date) const;
		bool isValidValue(const std::string& valueStr, double& value);
		double getExchangeRate(const std::string& date);
};

#endif