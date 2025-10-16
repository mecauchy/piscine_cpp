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
	int	year = std::atoi(date.substr(0, 4).c_str());
	int	month = std::atoi(date.substr(5, 2).c_str());
	int	day = std::atoi(date.substr(8, 2).c_str());
	if (year < 2009 || month < 1 || month > 12)
		return false;
	static const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int	maxDay = daysInMonth[month - 1];
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

// lower_bound renvoie la date exacte ou la première date supérieure
double BitcoinExchange::getExchangeRate(const std::string& date)
{
	std::map<std::string, double>::const_iterator it = _data.lower_bound(date);
	// Si la map est vide
	if (it == _data.end() && _data.empty())
		return -1.0;
	// Si aucune date disponible avant celle demandée
	if (it == _data.begin() && (it == _data.end() || it->first > date))
		return -1.0;
	// Si on est à la fin ou que la date exacte n'existe pas
	if (it == _data.end() || it->first != date)
		--it;

	return it->second;
}


#define C_RED     "\033[31m"
#define C_RESET   "\033[0m"

void BitcoinExchange::loadData(const std::string& filename) {
	std::ifstream			file(filename.c_str());
	if (!file.is_open())
	{
		throw std::runtime_error(std::string("Could not open file: ") + filename);
	}
	std::string line;
	std::getline(file, line); // ignore la première ligne (header)
	while (std::getline(file, line)) {
		std::stringstream	iss(line);
		std::string			date;
		std::string			valueStr;
		// double				value = 0.0;
		if (std::getline(iss, date, ',') && std::getline(iss, valueStr))
		{
			trim(date);
			trim(valueStr);
			if (isValidDate(date)) {
				_data[date] = std::atof(valueStr.c_str());
			}
		}
	}
}

void BitcoinExchange::processInput(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error(std::string("Could not open file: ") + filename);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::stringstream	iss(line);
		std::string			date;
		std::string			valueStr;
		double				value = 0.0;
		if (std::getline(iss, date, '|') && std::getline(iss, valueStr, '|'))
		{
			trim(date);
			trim(valueStr);
			if (!isValidDate(date) || !isValidValue(valueStr, value))
				continue;
			double rate = getExchangeRate(date);
			if (rate < 0) 
				std::cerr << "Error: No exchange rate available for date " << date << std::endl;
			else
				std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << value * rate << std::endl;
		}
		else
			std::cerr << "Error: Invalid input line: " << line << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange() {}