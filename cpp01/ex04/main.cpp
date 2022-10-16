#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "ERROR" << std::endl,1);
	//TODO hacer, no va ifstream en linux
	std::cout << "correct argument" << std::endl;
	return (0);
}
