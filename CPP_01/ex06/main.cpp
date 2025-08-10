#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "\nTesting different complaint levels:\n" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << C_BLUE "\t\t----- FIRST TEST -----" << C_RESET << std::endl;
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << C_BLUE "\t\t-----\t2 TEST\t-----" << C_RESET << std::endl;
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << C_BLUE "\t\t-----\t3 TEST\t-----" << C_RESET << std::endl;
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	std::cout << C_BLUE "\t\t-----\t4 TEST\t-----" << C_RESET << std::endl;
	std::cout << std::endl;
	harl.complain("INVALID");
	std::cout << std::endl;
	std::cout << C_BLUE "\t\t-----\t5 TEST\t-----" << C_RESET << std::endl;
	std::cout << std::endl;
	std::cout << C_GREEN << "End of tests." << C_RESET << std::endl;
	std::cout << std::endl;
	return (0);
}