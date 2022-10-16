#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	std::cout << "--- DEBUG LEVEL ---" << std::endl;
	karen.complain("DEBUG");
	std::cout << "--- INFO LEVEL ---" << std::endl;
	karen.complain("INFO");
	std::cout << "--- WARNING LEVEL ---" << std::endl;
	karen.complain("WARNING");
	std::cout << "--- ERROR LEVEL ---" << std::endl;
	karen.complain("ERROR");
	std::cout << "--- UNDEFINED ---" << std::endl;
	karen.complain("KAREN");
	return (0);
}
