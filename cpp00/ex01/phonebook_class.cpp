#include "phonebook_class.hpp"
#include <iomanip>

void	Phonebook_class::createNewContact(void) {
	static size_t	indexOfContactToAdd;

	if (indexOfContactToAdd == 8)
		indexOfContactToAdd = 0;
	std::cout << "FIRST NAME: ";
	std::string	firstName;
	std::getline(std::cin, firstName);
	if (std::cin.eof())
		std::exit(0);
	Phonebook_class::contact[indexOfContactToAdd].setContactFirstName(firstName);
	std::cout << "> LAST NAME: ";
	std::string	lastName;
	std::getline(std::cin, lastName);
	if (std::cin.eof())
		std::exit(0);
	Phonebook_class::contact[indexOfContactToAdd].setContactLastName(lastName);
	std::cout << "> NICKNAME: ";
	std::string	nickname;
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		std::exit(0);
	Phonebook_class::contact[indexOfContactToAdd].setContactNickname(nickname);
	std::cout << "> PHONE NUMBER: ";
	std::string	phoneNumber;
	std::getline(std::cin, phoneNumber);
	if (std::cin.eof())
		std::exit(0);
	size_t indexOfPhoneNumber = 0;
	while (indexOfPhoneNumber < phoneNumber.length())
	{
		if (std::cin.eof())
			std::exit(0);
		if (!isnumber(phoneNumber[indexOfPhoneNumber]))
		{
			std::cout << "NOT A VALID PHONE NUMBER, PLEASE, TRY AGAIN" << std::endl;
			std::cout << "> PHONE NUMBER: ";
			std::getline(std::cin, phoneNumber);
			indexOfPhoneNumber = 0;
			continue ;
		}
		indexOfPhoneNumber++;
	}
	Phonebook_class::contact[indexOfContactToAdd].setContactPhoneNumber(phoneNumber);
	std::cout << "> DARK SECRET: ";
	std::string	darkSecret;
	std::getline(std::cin, darkSecret);
	Phonebook_class::contact[indexOfContactToAdd].setContactDarkSecret(darkSecret);
	std::cout << "> CONTACT " << firstName << " CREATED!" << std::endl;
	indexOfContactToAdd++;
}

void	Phonebook_class::searchCurrentContacts(void) const {
	if (Phonebook_class::contact[0].getContactFirstName().length() == 0)
	{
		std::cout << "ANY CONTACTS WERE CREATED, PLEASE, FIRST CREATE A CONTACT" << std::endl << "> ";
		return ;
	}
	std::cout << "|   INDEX  |" << "FIRSTNAME |" << " LASTNAME |" << " NICKNAME |" << std::endl;
	for (size_t	indexOfContactsToShow = 0; indexOfContactsToShow < 8; indexOfContactsToShow++)
	{
		std::cout << "> |" << std::setw(10) << indexOfContactsToShow;
		if (Phonebook_class::contact[indexOfContactsToShow].getContactFirstName().length() < 10)
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactFirstName();
		else
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactFirstName().substr(0, 9) + ".";
		if (Phonebook_class::contact[indexOfContactsToShow].getContactLastName().length() < 10)
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactLastName();
		else
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactLastName().substr(0, 9) + ".";
		if (Phonebook_class::contact[indexOfContactsToShow].getContactNickname().length() < 10)
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactNickname() << "|" << std::endl;
		else
			std::cout << "|" << std::setw(10) << Phonebook_class::contact[indexOfContactsToShow].getContactNickname().substr(0, 9) + "." << "|" << std::endl;
	}
	std::string indexOfContactSelectedChecker;
	do
	{
		std::cout << std::endl << "> SELECT AN INDEX TO VIEW CONTACT INFORMATION OR PRESS 8 TO EXIT > ";
		std::cin >> indexOfContactSelectedChecker;
		if (std::cin.eof())
			std::exit(0);
		if (indexOfContactSelectedChecker.length() > 1 || !isnumber(indexOfContactSelectedChecker[0]))
			std::cout << "> \"" << indexOfContactSelectedChecker << "\" IS NOT A VALID CONTACT IDENTIFIER, PLEASE, TYPE A VALID INDEX" << std::endl;
		else
		{
			size_t		indexOfContactSelected = (int)indexOfContactSelectedChecker[0] - '0';
			if (indexOfContactSelected == 8)
			{
				std::cout << "> YOU CHOSE TO EXIT SEARCH MODE" << std::endl << std::endl;
				return ;
			}
			if (Phonebook_class::contact[indexOfContactSelected].getContactFirstName().length() == 0)
			{
				std::cout << std::endl << "> CONTACT Nº " << indexOfContactSelected << " WAS NOT ADDED, PLEASE, SELECT ANOTHER PHONEBOOK OPTION" << std::endl;
				return ;
			}
			std::cout << "> FIRST NAME : " << Phonebook_class::contact[indexOfContactSelected].getContactFirstName() << std::endl;
			std::cout << "> LAST NAME : " << Phonebook_class::contact[indexOfContactSelected].getContactLastName() << std::endl;
			std::cout << "> NICKNAME : " << Phonebook_class::contact[indexOfContactSelected].getContactNickname() << std::endl;
			std::cout << "> PHONE NUMBER : " << Phonebook_class::contact[indexOfContactSelected].getContactPhoneNumber() << std::endl;
			std::cout << "> DARK SECRET : " << Phonebook_class::contact[indexOfContactSelected].getContactDarkSecret() << std::endl;
		}
	}
	while (indexOfContactSelectedChecker.length() > 1 || !isnumber(indexOfContactSelectedChecker[0]));
}
