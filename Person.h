#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;

public:
    Person(const std::string& firstName, const std::string& lastName);
    virtual ~Person();

    virtual void displayInfo() const;
};

#endif
