
#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string email;

public:
    Contact(const std::string& firstName, const std::string& lastName,
            const std::string& phoneNumber, const std::string& email);

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setPhoneNumber(const std::string& phoneNumber);
    void setEmail(const std::string& email);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getPhoneNumber() const;
    std::string getEmail() const;

    void displayInfo() const;
};

#endif
