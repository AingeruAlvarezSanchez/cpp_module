#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact_class {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkSecret;
public:
	void setContactFirstName(const std::string _firstName);
	void setContactLastName(const std::string _lastName);
	void setContactNickname(const std::string _nickname);
	void setContactPhoneNumber(const std::string _phoneNumber);
	void setContactDarkSecret(const std::string _darkSecret);
	std::string	getContactFirstName(void) const;
	std::string getContactLastName(void) const;
	std::string getContactNickname(void) const;
	std::string getContactPhoneNumber(void) const;
	std::string getContactDarkSecret(void) const;
};

#endif //CONTACT_CLASS_HPP
