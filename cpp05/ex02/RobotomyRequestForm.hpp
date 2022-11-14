#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &_robotomy);
	RobotomyRequestForm(std::string _target);
	virtual	~RobotomyRequestForm();
	const RobotomyRequestForm	&operator=(const RobotomyRequestForm &_robotomy);
	virtual void				execute(const Bureaucrat &_executor) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP
