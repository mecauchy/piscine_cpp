#include "CsvParser.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

CsvParser::CsvParser() {}

CsvParser::~CsvParser() {}

bool CsvParser::parse(const std::string& filename, std::vector<std::pair<std::string, float>>& data) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        std::string valueStr;

        if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr)) {
            std::cerr << "Error: Invalid line format: " << line << std::endl;
            continue;
        }

        float value;
        try {
            value = std::stof(valueStr);
        } catch (const std::invalid_argument&) {
            std::cerr << "Error: Invalid value for date " << date << ": " << valueStr << std::endl;
            continue;
        } catch (const std::out_of_range&) {
            std::cerr << "Error: Value out of range for date " << date << ": " << valueStr << std::endl;
            continue;
        }

        data.push_back(std::make_pair(date, value));
    }

    file.close();
    return true;
}