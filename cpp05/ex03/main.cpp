#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try {
		Intern someRandomIntern;
		Form *shrubbery;
		Form *robotomy;
		Form *presidential;
		Form *nonexistent;
		Bureaucrat someRandomBureaucrat("Bureaucrat", 1);

		shrubbery = someRandomIntern.makeForm("shrubbery request", "Home");
		robotomy = someRandomIntern.makeForm("robotomy request", "Bender");
		presidential = someRandomIntern.makeForm("presidential request", "someone");
		nonexistent = someRandomIntern.makeForm("nonexistent", "nonexistent");

		someRandomBureaucrat.signForm(*shrubbery);
		someRandomBureaucrat.signForm(*robotomy);
		someRandomBureaucrat.signForm(*presidential);
		someRandomBureaucrat.signForm(*nonexistent);
		someRandomBureaucrat.executeForm(*shrubbery);
		someRandomBureaucrat.executeForm(*robotomy);
		someRandomBureaucrat.executeForm(*presidential);
		someRandomBureaucrat.executeForm(*nonexistent);
	}
	catch (std::exception &_exception) {
		std::cout << _exception.what() << std::endl;
	}
	return (0);
}
