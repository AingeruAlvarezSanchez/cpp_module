#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat	test("test", 50);
		Bureaucrat	john("John", 150);
		Bureaucrat	darwin("Darwin", 1);
		Form	*shrubbery = new ShrubberyCreationForm("shrubbery");
		Form	*robotomy = new RobotomyRequestForm("robotomy");
		Form	*presidential = new PresidentialPardonForm("presidential");

		std::cout << "--- Example of ShrubberyCreationForm ---" << std::endl;
		darwin.signForm(*shrubbery);
		darwin.executeForm(*shrubbery);
		std::cout << "--- Example of RobotomyRequestForm ---" << std::endl;
		darwin.signForm(*robotomy);
		darwin.executeForm(*robotomy);
		std::cout << "--- Example of PresidentialPardonForm ---" << std::endl;
		darwin.signForm(*presidential);
		darwin.executeForm(*presidential);
		std::cout << "----- General tests -----" << std::endl;
		std::cout << test << std::endl;
		test.GradeDecrement();
		std::cout << test << std::endl;
		test.GradeIncrement();
		std::cout << test << std::endl;
		test.GradeIncrement();
		std::cout << test << std::endl;
		std::cout << "----- Too low exceptions -----" << std::endl;
		std::cout << john << std::endl;
		john.GradeDecrement();
		std::cout << john << std::endl;
		std::cout << "----- Too high exceptions -----" << std::endl;
		std::cout << darwin << std::endl;
		darwin.GradeIncrement();
		std::cout << darwin << std::endl;
		delete shrubbery;
		delete robotomy;
		delete presidential;
	}
	catch (std::exception &_exception) {
		std::cout << _exception.what() << std::endl;
	}
	return (0);
}
