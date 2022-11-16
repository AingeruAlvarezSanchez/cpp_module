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
	virtual	~Form();
	const Form	&operator=(const Form &_form);
	const std::string	getName(void) const;
	bool				getSigned(void) const;
	uint16_t			getSignationGrade(void) const;
	uint16_t			getExecutionGrade(void) const;
	void				beSigned(Bureaucrat &_bureaucrat);
	virtual void		execute(const Bureaucrat &_executor) const = 0;

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

	class FormNotSignedException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Form not signed");
		}
	};
};

std::ostream	&operator<<(std::ostream &_ostream, Form &_form);

#endif //FORM_HPP
