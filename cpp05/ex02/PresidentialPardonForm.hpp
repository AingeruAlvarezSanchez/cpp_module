#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &_presidential);
	PresidentialPardonForm(std::string _target);
	virtual	~PresidentialPardonForm();
	const PresidentialPardonForm	&operator=(const PresidentialPardonForm &_presidential);
	virtual void					execute(const Bureaucrat &_executor) const;
};

#endif //PRESIDENTIALPARDONFORM_HPP
