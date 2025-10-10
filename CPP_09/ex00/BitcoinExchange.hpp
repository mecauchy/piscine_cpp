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
		void processInput(const std::string& filename) const;

	private:
	
		std::map<std::string, float> _data;
		bool isValidDate(const std::string& date) const;
		bool isValidValue(const std::string& valueStr, float& value) const;
		float getExchangeRate(const std::string& date) const;
};

#endif