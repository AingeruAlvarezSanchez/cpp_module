#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Undefined") {}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45), _target(_target)  {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &_robotomy) : _target(_robotomy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &_robotomy) {
	this->_target = _robotomy._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &_executor) const {
	if (_executor.getGrade() > this->getExecutionGrade())
		throw FormTooLowException();
	if (!this->getSigned())
		throw FormNotSignedException();
	srand(time(0));
	int	randomNumber = rand();
	if (randomNumber % 2 == 0)
		std::cout << this->_target << " has been robotomized sucessfully" << std::endl;
	else
		std::cout << this->_target << " has been a failure" << std::endl;
}
