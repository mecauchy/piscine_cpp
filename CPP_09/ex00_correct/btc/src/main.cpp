#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "BitcoinExchange.hpp"
#include "../utils/CsvParser.hpp"

void displayBitcoinValue(const std::string& date, double amount, BitcoinExchange& exchange) {
    double price = exchange.getPrice(date);
    if (price < 0) {
        std::cerr << "Error: No price available for date " << date << std::endl;
        return;
    }
    std::cout << date << " => " << amount << " BTC = " << amount * price << " USD" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: Incorrect number of arguments." << std::endl;
        return 1;
    }

    std::string inputFile = argv[1];
    BitcoinExchange exchange;

    if (!exchange.loadPrices("data/bitcoin_prices.csv")) {
        std::cerr << "Error: Could not load bitcoin prices." << std::endl;
        return 1;
    }

    std::ifstream file(inputFile);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double amount;

        if (!(iss >> date >> amount)) {
            std::cerr << "Error: Invalid input format." << std::endl;
            continue;
        }

        displayBitcoinValue(date, amount, exchange);
    }

    file.close();
    return 0;
}