#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include <string>
#include <vector>
#include "Contact.h"

class ContactManager {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& newContact);
    void removeContact(int index);
    void editContact(int index, const std::string& newFirstName, const std::string& newLastName,
                     const std::string& newPhoneNumber, const std::string& newEmail);
    void displayContacts() const;
};

#endif
