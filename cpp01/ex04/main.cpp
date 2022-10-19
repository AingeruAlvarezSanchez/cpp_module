#include <iostream>
#include <fstream>

void	replaceWordsInFile(std::ifstream &inputFile, std::string fileName, std::string stringToErase, std::string stringToInsert)
{
	std::ofstream	outputFile;
	outputFile.open(fileName.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	std::string 	bufferToRead;
	u_int			posToInsertNewString;

	while (std::getline(inputFile, bufferToRead))
	{
		while (bufferToRead.find(stringToErase) != stringToErase.npos)
		{
			posToInsertNewString = bufferToRead.find(stringToErase);
			bufferToRead.erase(bufferToRead.find(stringToErase), stringToErase.length());
			bufferToRead.insert(posToInsertNewString, stringToInsert);
		}
		outputFile << bufferToRead << std::endl;
	}
	outputFile.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "ERROR" << std::endl,1);
	std::ifstream	inputFile;
	inputFile.open(argv[1], std::ifstream::in);
	if (!inputFile.is_open() || inputFile.peek() == std::string::npos)
		return (inputFile.close(), std::cout << "ERROR, FILE IS EMPTY OR DOES NOT EXIST" << std::endl, 1);
	if (!argv[2][0] || !argv[3][0])
		return (std::cout << "ERROR, ONE OR MORE STRINGS ARE EMPTY" << std::endl, 1);
	replaceWordsInFile(inputFile, argv[1], argv[2], argv[3]);
	inputFile.close();
	return (0);
}
