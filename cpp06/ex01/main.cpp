#include <iostream>

struct Data {
	int		_exampleInteger;
	char	_exampleCharacter;
};

Data	*deserialize(uintptr_t raw)
{
	Data	*deserializedData = new Data();

	deserializedData = reinterpret_cast<Data *>(raw);
	return (deserializedData);
}

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	convertedData;

	convertedData = reinterpret_cast<uintptr_t>(ptr);
	return (convertedData);
}

int	main(void)
{
	Data	data = {._exampleInteger = 4, ._exampleCharacter = 'a'};

	std::cout << "data structure attributes: " << std::endl << "Integer: " << data._exampleInteger << " Character: " << data._exampleCharacter << std::endl;
	uintptr_t	serializedData = serialize(&data);
	std::cout << "serialized data in uintptr_t: " << serializedData << std::endl;
	Data	testData = *deserialize(serializedData);
	std::cout << "New data structure attributes: " << std::endl << "Integer: " << testData._exampleInteger << " Character: " << testData._exampleCharacter << std::endl;
	testData._exampleCharacter = 'B';
	std::cout << "After change data structure attributes: " << std::endl << "Integer: " << testData._exampleInteger << " Character: " << testData._exampleCharacter << std::endl;
	return (0);
}
