#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : _name("Undefined"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, uint16_t _grade) : _name(_name), _grade(_grade) {}

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
	try {
		if ((this->getGrade() - 1) < 1)
			throw	BureaucratHighException();
	}
	catch (BureaucratHighException &_exception) {
		std::cout << "Error, grade too High" << std::endl;
		return ;
	}
	this->_grade--;
}

void Bureaucrat::GradeDecrement() {
	try {
		if ((this->getGrade() + 1) > 150)
			throw	BureaucratLowException();
	}
	catch (BureaucratLowException &_exception) {
		std::cout << "Error, grade too low" << std::endl;
		return ;
	}
	this->_grade++;
}
