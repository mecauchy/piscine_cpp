#include <iostream>
#include "Array.hpp"

int	main(void)
{
	std::cout << C_YELLOW << "===== ARRAY TESTS =====" << C_RESET << std::endl;
	
	// Test constructeurs
	Array<int> empty;
	Array<int> arr(4);
	std::cout << "Empty size: " << empty.size() << ", Array size: " << arr.size() << std::endl;
	
	// Remplissage et affichage
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = (int)(i * 2);
	
	std::cout << "Values: ";
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	// Test copie
	Array<int> copy(arr);
	arr[0] = 42;
	std::cout << "Original[0]: " << arr[0] << ", Copy[3]: " << copy[3] << std::endl;
	
	// Test exception
	try {
		std::cout << "Accessing arr[10]: " << arr[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << C_RED << "Exception: " << e.what() << C_RESET << std::endl;
	}

	return (0);
}