#include "Person.h"
#include <iostream>

Person::Person(const std::string& firstName, const std::string& lastName)
    : firstName(firstName), lastName(lastName) {}

Person::~Person() {}

void Person::displayInfo() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
}
