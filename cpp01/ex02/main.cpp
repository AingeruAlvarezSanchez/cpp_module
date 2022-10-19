#include <iostream>

int main(void)
{
	std::string brainString = "HI THIS IS BRAIN";
	std::string *stringPTR = &brainString;
	std::string &stringREF = brainString;

	std::cout << "Pointer to string -> " << stringPTR << std::endl;
	std::cout << "Reference to string -> " << stringREF << std::endl;
	return (0);
}
