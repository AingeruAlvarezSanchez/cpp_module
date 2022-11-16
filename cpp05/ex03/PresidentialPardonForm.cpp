#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Undefined") {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5), _target(_target)  {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_presidential) : _target(_presidential._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &_presidential) {
	this->_target = _presidential._target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &_executor) const {
	if (_executor.getGrade() > this->getExecutionGrade())
		throw FormTooLowException();
	if (!this->getSigned())
		throw FormNotSignedException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
