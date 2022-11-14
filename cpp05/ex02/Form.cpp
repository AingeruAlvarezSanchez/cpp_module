#include "Form.hpp"

Form::Form() : _name("Undefined"), _isSigned(0), _signationGrade(1), _executionGrade(1) {}

Form::Form(std::string _name, uint16_t _signationGrade, uint16_t _executionGrade) : _name(_name), _isSigned(0), _signationGrade(_signationGrade), _executionGrade(_executionGrade) {
	if (_signationGrade > 150)
		throw FormTooLowException();
	if (_signationGrade < 1)
		throw FormTooHighException();
	if (_executionGrade > 150)
		throw FormTooLowException();
	if (_executionGrade < 1)
		throw FormTooHighException();
}

Form::Form(const Form &_form) : _name(_form.getName()), _isSigned(_form.getSigned()), _signationGrade(_form.getSignationGrade()), _executionGrade(_form.getExecutionGrade()) {}

Form::~Form() {}

const Form &Form::operator=(const Form &_form) {
	this->_isSigned = _form.getSigned();
	return (*this);
}

const std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_isSigned);
}

uint16_t Form::getSignationGrade() const {
	return (this->_signationGrade);
}

uint16_t Form::getExecutionGrade() const {
	return (this->_executionGrade);
}

void Form::beSigned(Bureaucrat &_bureaucrat) {
	if (_bureaucrat.getGrade() > this->getSignationGrade())
		throw FormTooLowException();
	this->_isSigned = 1;
}

std::ostream &operator<<(std::ostream &_ostream, Form &_form) {
	std::cout << "Name: " << _form.getName() << " | Is Signed: " << _form.getSigned() << " | Signation Grade: " << _form.getSignationGrade() << " | Execution Grade: " << _form.getExecutionGrade();
	return (_ostream);
}
