#include "Karen.hpp"

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! if you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now!" << std::endl;
}

void	Karen::complain(std::string level) {
	void		(Karen::*karenComplaintsFunctions[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levelsOfComplaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int indexOfComplaintLevels = 0; indexOfComplaintLevels < 4; indexOfComplaintLevels++)
	{
		if (level == levelsOfComplaints[indexOfComplaintLevels])
			(this->*karenComplaintsFunctions[indexOfComplaintLevels])();
	}
}
