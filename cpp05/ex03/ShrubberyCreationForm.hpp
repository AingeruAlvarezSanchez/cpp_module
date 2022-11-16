#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &_shrubbery);
	ShrubberyCreationForm(std::string _target);
	virtual	~ShrubberyCreationForm();
	const ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &_shrubbery);
	virtual void				execute(const Bureaucrat &_executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
