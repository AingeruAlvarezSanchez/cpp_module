#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP
#include <fstream>
#include <map>

class BitcoinExchange {
public:
	unsigned short 				min_year;
	unsigned short 				max_year;
	static const unsigned short	date_width = 11;
private:
	std::map<std::string, float>	_database;
	std::ifstream					_input_file;
public:
	//Constructors
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& cpy); //TODO

	//operator= Overload
	BitcoinExchange&	operator=(const BitcoinExchange& cpy); //TODO

	//Database manipulation
	void	CreateDatabase(const char *database_name);

	//Getters
	const std::ifstream&				GetInputFile() const;
	const std::map<std::string, float>&	GetDatabase() const;

	//Destructor
	~BitcoinExchange();
};

#endif
