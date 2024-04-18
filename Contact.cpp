#include "Contact.h"
#include <iostream>

Contact::Contact(const std::string& firstName, const std::string& lastName,
                 const std::string& phoneNumber, const std::string& email)
    : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), email(email) {}

void Contact::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setEmail(const std::string& email) {
    this->email = email;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getEmail() const {
    return email;
}

void Contact::displayInfo() const {
    std::cout << "Imie: " << firstName << std::endl;
    std::cout << "Nazwisko: " << lastName << std::endl;
    std::cout << "Numer telefonu: " << phoneNumber << std::endl;
    std::cout << "Email: " << email << std::endl;
}
