#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>

//Error handling
#define EBADINPUT 1
//TODO clean, put functions inside BitcoinExchange class

bool	parse_date(const std::string& line, std::string& date) {
	if (line.find('|') == std::string::npos || line.find('|') != BitcoinExchange::date_width) {
		std::cout << "Error: bad input => " << line << "\n";
		errno = EBADINPUT;
		return true;
	}
	date = line.substr(0, (line.find('|') - 1));

    struct tm s_date = {};
    if (strptime(date.c_str(), "%Y-%m-%d", &s_date) == NULL) {
        std::cout << "Error: bad input => " << line << "\n";
        errno = EBADINPUT;
        return true;
    }

	unsigned short month_numeric_value;
	unsigned short day_numeric_value;

	month_numeric_value = std::strtol(date.substr(5, 2).c_str(), NULL, 10);
	day_numeric_value = std::strtol(date.substr(8, 2).c_str(), NULL, 10);

	if (month_numeric_value == 2 && day_numeric_value > 29) {
		std::cout << "Error: bad input => " << line << "\n";
		errno = EBADINPUT;
		return true;
	}
	return false;
}

bool	parse_value(const std::string& line, double& value) {
	value = std::strtof(line.substr(line.find('|') + 1, line.find("\n\0")).c_str(), NULL);

	if (value <= 0) {
		std::cout << "Error: not a positive number." << "\n";
		errno = EBADINPUT;
		return true;
	} else if (value > 1000) {
		std::cout << "Error: too large a number." << "\n";
		errno = EBADINPUT;
		return true;
	}
	return false;
}

bool	has_header(const std::string& first_line) {
	if (first_line.substr().substr(0, 4) != "date"
		|| first_line.substr().substr(7, 5) != "value") {
		return false;
	}
	return true;
}

bool	get_closest_date(const std::string& str_date, const std::string& str_upper_date) {
	struct tm date = {}, upper_date = {};

	strptime(str_date.c_str(), "%Y-%m-%d", &date);
	strptime(str_upper_date.c_str(), "%Y-%m-%d", &upper_date);

	time_t	t_date = mktime(&date);
	time_t	t_upper_date = mktime(&upper_date);
	double upper_date_tdiff = difftime(t_upper_date, t_date);

	if (upper_date_tdiff == 0.00)
		return true;
	return false;
}

bool	input_file_health_check(const char* file_name, std::ifstream& input_file) {
	if (file_name) {
		input_file.open(file_name);
		if (!input_file.is_open()) {
			return true;
		}
	} else {
		return true;
	}
	return false;
}

BitcoinExchange database_creation(const char* database_file_name) {
	BitcoinExchange	btc_exchanger;

	if (database_file_name) {
		btc_exchanger.CreateDatabase(database_file_name);
	} else {
		btc_exchanger.CreateDatabase("data.csv");
	}
	return	btc_exchanger;
}

void	display_btc_value(const char* file_name, const char* database_file_name) {
	std::ifstream	input_file;

	if (input_file_health_check(file_name, input_file)) {
		errno = EBADINPUT;
		throw	std::invalid_argument("could not open file.");
	}

	BitcoinExchange	btc_exchanger = database_creation(database_file_name);
	std::string 	line;
	std::string 	date;
	double			value;
	std::ifstream	format_checker;

	format_checker.open(file_name);
	std::getline(format_checker, line);
	if (has_header(line)) {
		std::getline(input_file, line);
	}
	format_checker.close();

	while (std::getline(input_file, line)) {
		if (parse_date(line, date)
			|| parse_value(line, value)) {
			continue ;
		}
		std::cout << date << " => " << value << " = ";

		std::string	upper_date = btc_exchanger.GetDatabase().lower_bound(date)->first;

		if (get_closest_date(date, upper_date)) {
			std::cout << std::fixed << std::setprecision(2) << (btc_exchanger.GetDatabase().lower_bound(date)->second * value) << "\n";
		} else {
			std::cout << std::fixed << std::setprecision(2) << ((--btc_exchanger.GetDatabase().lower_bound(date))->second * value) << "\n";
		}
	}
	input_file.close();
}

int	main(__attribute__((unused)) int argc, char **argv) {
	try {
		display_btc_value(argv[1], argv[2]);
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << "\n";
	}
	return 0;
}
