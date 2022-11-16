#include "Intern.hpp"

Form *Intern::makeForm(std::string formName, std::string formTarget) {
	Form		*newForm;
	std::string	arrayOfFormNames[] = {"shrubbery request", "robotomy request", "presidential request"};
	size_t		indexOfFormNames = 0;

	while (indexOfFormNames < 3)
	{
		if (formName == arrayOfFormNames[indexOfFormNames])
			break ;
		indexOfFormNames++;
	}
	switch (indexOfFormNames) {
		case (0):
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (newForm = new ShrubberyCreationForm(formTarget), newForm);
		}
		case (1):
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (newForm = new RobotomyRequestForm(formTarget), newForm);
		}
		case (2):
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (newForm = new PresidentialPardonForm(formTarget), newForm);
		}
		default:
		{
			std::cout << "The specified form does not exist" << std::endl;
			return (NULL);
		}
	}
}
