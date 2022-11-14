#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	bool				_isSigned;
	const uint16_t		_signationGrade;
	const uint16_t		_executionGrade;
public:
	Form();
	Form(std::string _name, uint16_t _signationGrade, uint16_t _executionGrade);
	Form(const Form &_form);
	~Form();
	const Form	&operator=(const Form &_form);
	const std::string	getName(void) const;
	bool				getSigned(void) const;
	uint16_t			getSignationGrade(void) const;
	uint16_t			getExecutionGrade(void) const;
	void				beSigned(Bureaucrat &_bureaucrat);

	class FormTooLowException : public std::exception {
	public:
		const char	*what() const throw() {
			return ("Grade too low");
		}
	};

	class FormTooHighException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Grade too High");
		}
	};
};

std::ostream	&operator<<(std::ostream &_ostream, Form &_form);

#endif //FORM_HPP
