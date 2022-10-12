#include "phonebook_class.hpp"

int main(int argc, __attribute__((unused))char **argv)
{
	if (argc != 1)
		return (std::cout << "ERROR" << std::endl, 1);
	std::string	instructionsPrompt;
	Phonebook_class	phonebook;
	std::cout << "YOU CAN USE \"ADD\" TO ADD A NEW CONTACT, \"SEARCH\" TO SEE A LIST OF SAVED CONTACTS OR \"EXIT\" TO EXIT PHONEBOOK" << std::endl;
	do
	{
		std::cout << "> ";
		if (instructionsPrompt == "ADD")
		{
			phonebook.createNewContact();
		}
		else if (instructionsPrompt == "SEARCH")
		{
			phonebook.searchCurrentContacts();
		}
		if (instructionsPrompt == "EXIT")
			break ;
	}
	while (std::getline(std::cin, instructionsPrompt));
	return (0);
}
