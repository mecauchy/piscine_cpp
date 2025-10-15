# Bitcoin Exchange Program

This project is a C++98 program that allows users to display the value of a certain amount of bitcoins on a specific date. It utilizes a CSV database for bitcoin prices and handles input from a second database with error management.

## Project Structure

```
btc
├── src
│   ├── main.cpp            # Entry point of the program
│   ├── BitcoinExchange.cpp  # Implementation of the BitcoinExchange class
│   └── utils
│       └── CsvParser.cpp    # Implementation of the CsvParser class
├── include
│   ├── BitcoinExchange.hpp   # Declaration of the BitcoinExchange class
│   └── CsvParser.hpp         # Declaration of the CsvParser class
├── data
│   ├── bitcoin_prices.csv     # Historical bitcoin prices
│   └── input_data.csv         # Input data for evaluation
├── Makefile                   # Build instructions
└── README.md                  # Project documentation
```

## Compilation

To compile the program, navigate to the project directory and run the following command:

```
make
```

This will generate the executable named `btc`.

## Usage

To run the program, use the following command:

```
./btc <input_file>
```

Replace `<input_file>` with the path to your input CSV file (e.g., `data/input_data.csv`).

## Example

Given an input file with the following content:

```
date,value
2023-01-01,0.5
2023-01-02,1.0
```

The program will output the corresponding bitcoin values based on the historical prices found in `data/bitcoin_prices.csv`.

## Error Management

The program includes error handling for:

- Invalid date formats
- Non-numeric values
- Dates not found in the bitcoin prices database

Ensure that your input data adheres to the expected format to avoid errors during execution.