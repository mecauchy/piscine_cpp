// filepath: /btc/btc/src/BitcoinExchange.cpp
#include "BitcoinExchange.hpp"
#include "CsvParser.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <stdexcept>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        _data = other._data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadData(const std::string& filename) {
    CsvParser parser;
    std::map<std::string, float> prices = parser.parse(filename);
    _data = prices;
}

float BitcoinExchange::getPrice(const std::string& date) const {
    std::map<std::string, float>::const_iterator it = _data.find(date);
    if (it != _data.end()) {
        return it->second;
    } else {
        throw std::invalid_argument("Date not found in data.");
    }
}