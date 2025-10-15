#ifndef CSVPARSER_HPP
#define CSVPARSER_HPP

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

class CsvParser {
public:
    CsvParser(const std::string& filename);
    bool parse(std::vector<std::pair<std::string, float>>& data);
    bool validateLine(const std::string& line);
    
private:
    std::string _filename;
};

#endif // CSVPARSER_HPP