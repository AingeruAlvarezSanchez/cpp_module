#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Undefined") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137), _target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &_shrubbery) : _target(_shrubbery._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &_shrubbery) {
	this->_target = _shrubbery._target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &_executor) const {
	if (_executor.getGrade() > this->getExecutionGrade())
		throw FormTooLowException();
	if (!this->getSigned())
		throw FormNotSignedException();
	std::ofstream	targetFile(this->_target + "_shrubbery");

	targetFile << "       _-_" << std::endl;
	targetFile << "   / ~~   ~~ \\" << std::endl;
	targetFile << " /~~         ~~\\" << std::endl;
	targetFile << "{               }" << std::endl;
	targetFile << " \\  _-     -_  /" << std::endl;
	targetFile << "   ~  \\\\ //  ~" << std::endl;
	targetFile << "_- -   | | _- _" << std::endl;
	targetFile << "  _ -  | |   -_" << std::endl;
	targetFile << "      // \\\\" << std::endl;
	targetFile.close();
}
