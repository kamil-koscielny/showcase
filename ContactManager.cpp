#include "ContactManager.h"
#include <iostream>

void ContactManager::addContact(const Contact& newContact) {
    contacts.push_back(newContact);
}

void ContactManager::removeContact(int index) {
    if (index >= 0 && index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}

void ContactManager::editContact(int index, const std::string& newFirstName, const std::string& newLastName,
                                 const std::string& newPhoneNumber, const std::string& newEmail) {
    if (index >= 0 && index < contacts.size()) {
        Contact& contact = contacts[index];
        contact.setFirstName(newFirstName);
        contact.setLastName(newLastName);
        contact.setPhoneNumber(newPhoneNumber);
        contact.setEmail(newEmail);
    }
}

void ContactManager::displayContacts() const {
    int index = 0;
    for (const auto& contact : contacts) {
        std::cout << index << "." << std::endl;
        contact.displayInfo();
        std::cout << std::endl; // Oddziel ka¿dy kontakt pust¹ lini¹
        index++;
    }
}
