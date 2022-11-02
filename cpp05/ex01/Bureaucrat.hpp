#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string	_name;
	uint16_t 			_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, uint16_t _grade);
	Bureaucrat(const Bureaucrat &_bureaucrat);
	~Bureaucrat();
	const Bureaucrat	&operator=(const Bureaucrat &_bureaucrat);
	const std::string	getName(void) const;
	uint16_t			getGrade(void) const;
	void				GradeIncrement(void);
	void				GradeDecrement(void);
	void				signForm(Form &_form);

	class BureaucratLowException : public std::exception {
	public:
		const char	*what() const throw() {
			return ("Grade too low");
		}
	};

	class BureaucratHighException : public std::exception {
	public:
		const char	*what() const throw() {
			return ("Grade too high");
		}
	};
};

std::ostream	&operator<<(std::ostream &_ostream, const Bureaucrat &_bureaucrat);

#endif //BUREAUCRAT_H
