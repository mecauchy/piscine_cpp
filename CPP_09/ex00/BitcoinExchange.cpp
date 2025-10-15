#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {
		_data = other._data;
	}
	return *this;
}

bool	BitcoinExchange::isValidDate(const std::string& date) const
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (year < 2009 || month < 1 || month > 12)
		return false;
	static const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int maxDay = daysInMonth[month - 1];
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		maxDay = 29; // année bissextile
	if (day < 1 || day > maxDay)
		return false;
	return true;
}

bool	BitcoinExchange::isValidValue(const std::string& valueStr, double& value) 
{
	if (valueStr.empty())
	{
		std::cerr << "Error: Value is empty." << std::endl;
		return false;
	}
	bool hasDot = false;
	for ( size_t i = 0; i < valueStr.length(); ++i) 
	{
		char c = valueStr[i];
		if ( c == '.')
		{
			if (hasDot)
			{
				std::cerr << "Error: Multiple decimal points in value: " << valueStr << std::endl;
				return false;
			}
			hasDot = true;
		}
		else if ( c == '-')
		{
			if (i != 0)
			{
				std::cerr << "Error: Negative sign in invalid position in value: " << valueStr << std::endl;
				return false;
			}
		}
		else if (!std::isdigit(c))
		{
			std::cerr << "Error: Non-numeric character in value: " << valueStr << std::endl;
			return false;
		}
	}
	// convertit la chaîne en double
	value = std::atof(valueStr.c_str());
	if (value < 0)
	{
		std::cerr << "Error: Negative value: " << valueStr << std::endl
			<< "Value must be non-negative." << std::endl;
		return false;
	}
	if (value > 1000)
	{
		std::cerr << "Error: Value too large: " << valueStr << std::endl
			<< "Value must be less than or equal to 1000." << std::endl;
		return false;
	}
	return true;
}

// elimine les espaces en début et fin de chaîne
void	BitcoinExchange::trim(std::string& str)
{
	while (!str.empty() && (str[0] == ' ' || str[0] == '\t'))
		str.erase(0, 1);
	while (!str.empty() && (str[str.size() - 1] == ' ' || str[str.size() - 1] == '\t'))
		str.erase(str.size() - 1, 1);
}

void BitcoinExchange::loadData(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error(std::string("Could not open file: ") + filename);
	}

	std::string line;
	std::getline(file, line); // ignore la première ligne (header)

	while (std::getline(file, line)) {
		std::stringstream iss(line);
		std::string date;
		std::string valueStr;
		double value;

		if (std::getline(iss, date, ',') && std::getline(iss, valueStr)) {
			trim(date);
			trim(valueStr);

			if (isValidDate(date) && isValidValue(valueStr, value)) {
				_data[date] = value; 
			}
		}
	}
}


BitcoinExchange::~BitcoinExchange() {}