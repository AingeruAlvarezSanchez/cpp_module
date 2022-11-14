#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Undefined"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, uint16_t _grade) : _name(_name), _grade(_grade) {
	if (_grade < 1)
		throw BureaucratHighException();
	if (_grade > 150)
		throw BureaucratLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &_bureaucrat) : _name(_bureaucrat.getName()), _grade(_bureaucrat.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &_bureaucrat) {
	this->_grade = _bureaucrat.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &_ostream, const Bureaucrat &_bureaucrat) {
	_ostream << "Bureaucrat name: " << _bureaucrat.getName() << " | Bureaucrat grade: " << _bureaucrat.getGrade();
	return (_ostream);
}

const std::string	Bureaucrat::getName() const {
	return (this->_name);
}

uint16_t	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::GradeIncrement() {
	if ((this->getGrade() - 1) < 1)
		throw	BureaucratHighException();
	this->_grade--;
}

void Bureaucrat::GradeDecrement() {
	if ((this->getGrade() + 1) > 150)
		throw	BureaucratLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form &_form) {
	try {
		_form.beSigned(*this);
	}
	catch (std::exception &_exception) {
		std::cout << "Bureaucrat " << this->getName() << " cannot sign " << _form.getName() << " because " << _exception.what() << std::endl;
		throw BureaucratLowException();
	}
	std::cout << "Bureaucrat " << this->getName() << " signs form" << std::endl;
}
