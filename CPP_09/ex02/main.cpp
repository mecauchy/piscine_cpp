#include "PmergeMe.hpp"
#include <cstdlib>
#include <climits>

bool	isValidPositiveInt(const std::string& str, int& value)
{
	if (str.empty())
		return false;
	
	// Vérifie que c'est bien un nombre positif
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	
	// Conversion en long pour vérifier les dépassements
	char* endptr;
	long num = std::strtol(str.c_str(), &endptr, 10);
	
	if (*endptr != '\0' || num < 0 || num > INT_MAX)
		return false;
	
	value = static_cast<int>(num);
	return true;
}

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: No arguments provided." << std::endl;
		std::cerr << "Usage: " << argv[0] << " <positive integers>" << std::endl;
		return 1;
	}

	PmergeMe sorter;
	
	// Parse les arguments et ajoute les nombres
	for (int i = 1; i < argc; ++i)
	{
		int num;
		std::string arg(argv[i]);
		
		if (!isValidPositiveInt(arg, num))
		{
			std::cerr << "Error: Invalid argument '" << arg << "'" << std::endl;
			return 1;
		}
		
		sorter.addNumber(num);
	}
	
	// Affiche la séquence avant le tri
	sorter.printBeforeAndAfter();
	
	// Trie et mesure le temps
	sorter.sortAndMeasureTime();
	
	// Affiche la séquence après le tri
	// std::cout << "After:  ";
	// sorter.printSorted();
	
	return 0;
}
