#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "contact_class.hpp"

class Phonebook_class {
private:
	Contact_class	contact[8];
public:
	void createNewContact(void);
	void searchCurrentContacts(void) const;
};

#endif //PHONEBOOK_CLASS_HPP
