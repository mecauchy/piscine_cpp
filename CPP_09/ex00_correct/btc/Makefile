CC = g++
CFLAGS = -Wall -Wextra -I include
SRC = src/main.cpp src/BitcoinExchange.cpp src/utils/CsvParser.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = btc

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re