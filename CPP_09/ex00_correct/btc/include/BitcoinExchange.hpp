#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange {
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

    void loadPrices(const std::string& filename);
    double getPrice(const std::string& date) const;

private:
    std::map<std::string, double> _data;
};

#endif // BITCOINEXCHANGE_HPP