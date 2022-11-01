#include "Bureaucrat.h"

int main(void)
{
	Bureaucrat	test("test", 50);
	Bureaucrat	john("John", 150);
	Bureaucrat	darwin("Darwin", 1);

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
	return (0);
}
