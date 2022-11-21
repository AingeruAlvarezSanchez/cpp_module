#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: Incorrect number of arguments, you must give one argument" << std::endl, 1);
	char	characterInterpretation;
	if (strlen(argv[1]) == 1)
	{
		if (!std::isprint(argv[1][0]))
			characterInterpretation = static_cast<char>(atoi(argv[1]));
		else
			characterInterpretation = argv[1][0];
	}
	else
		characterInterpretation = static_cast<char>(atoi(argv[1]));
	if (!characterInterpretation && (argv[1][0] != '0' && argv[1][0] != '-'))
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (std::isprint(characterInterpretation))
			std::cout << "char: " << characterInterpretation << std::endl;
		else if (!std::isdigit(argv[1][0]) && argv[1][0] != '-')
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	int		integerInterpretation;
	if (strlen(argv[1]) == 1 && std::isalpha(argv[1][0]))
		integerInterpretation = static_cast<int>(argv[1][0]);
	else
		integerInterpretation = static_cast<int>(atoi(argv[1]));
	if (!integerInterpretation && (argv[1][0] != '0' && argv[1][0] != '-'))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << integerInterpretation << std::endl;
	float	floatInterpretation;
	floatInterpretation = static_cast<float>(atof(argv[1]));
	if (!floatInterpretation && (argv[1][0] != '0' && argv[1][0] != '-'))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << floatInterpretation << "f" << std::endl;
	double	doubleInterpretation;
	doubleInterpretation = static_cast<double>(atof(argv[1]));
	if (!doubleInterpretation && (argv[1][0] != '0' && argv[1][0] != '-'))
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << doubleInterpretation << std::endl;
	return (0);
}