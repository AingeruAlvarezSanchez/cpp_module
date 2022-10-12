#include "contact_class.hpp"

void Contact_class::setContactFirstName(const std::string _firstName) {
	this->_firstName = _firstName;
}

void Contact_class::setContactLastName(const std::string _lastName)	{
	this->_lastName = _lastName;
}

void Contact_class::setContactNickname(const std::string _nickname) {
	this->_nickname = _nickname;
}

void Contact_class::setContactPhoneNumber(const std::string _phoneNumber) {
	this->_phoneNumber = _phoneNumber;
}

void Contact_class::setContactDarkSecret(const std::string _darkSecret)	{
	this->_darkSecret = _darkSecret;
}

std::string	Contact_class::getContactFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact_class::getContactLastName(void) const {
	return (this->_lastName);
}

std::string Contact_class::getContactNickname() const {
	return (this->_nickname);
}

std::string Contact_class::getContactPhoneNumber() const {
	return (this->_phoneNumber);
}

std::string Contact_class::getContactDarkSecret() const {
	return (this->_darkSecret);
}
