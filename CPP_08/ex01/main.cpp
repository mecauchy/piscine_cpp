#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	try {
// 		sp.addNumber(1);
// 		sp.addNumber(52);
// 		sp.addNumber(1);
// 		sp.addNumber(2147483647);
// 		sp.addNumber(346);
// 		sp.addNumber(-46); // Ici, ça va lancer l'exception !
// 		sp.addNumber(346);
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception& e) {
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}
// 	return 0;
// }