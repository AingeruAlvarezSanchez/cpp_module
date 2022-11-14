#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat	test("test", 50);
		Bureaucrat	john("John", 150);
		Bureaucrat	darwin("Darwin", 1);
		Form		formTest("FormTest", 50, 40);
		Form		formJohn("FormJohn", 50, 40);
		//Form		formTooLow("FormTooLow", 151, 40);

		test.signForm(formTest);
		std::cout << formTest << std::endl;
		john.signForm(formJohn);
		std::cout << formJohn << std::endl;
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
	}
	catch (std::exception &_exception) {
		std::cout << _exception.what() << std::endl;
	}
	return (0);
}
