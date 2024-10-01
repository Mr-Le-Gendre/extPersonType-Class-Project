#include "extPersonType.h"
#include <iostream>

// Default constructor implementation
extPersonType::extPersonType()
    : name(""), birthDate(1, 1, 2000), streetAddress(""),
    city(""), state(""), zipCode(""), phone(""), relationship("") {}

// Parameterized constructor implementation
extPersonType::extPersonType(const std::string& name, int month, int day, int year,
    const std::string& streetAddress, const std::string& city,
    const std::string& state, const std::string& zipCode,
    const std::string& phone, const std::string& relationship)
    : name(name), birthDate(month, day, year), streetAddress(streetAddress),
    city(city), state(state), zipCode(zipCode), phone(phone), relationship(relationship) {}

// Print method
void extPersonType::print() const {
    std::cout << name << std::endl;
    birthDate.print(); // Assuming dateType has a print method
    std::cout << streetAddress << std::endl;
    std::cout << city << ", " << state << " " << zipCode << std::endl;
    std::cout << phone << std::endl;
    std::cout << relationship << std::endl;
}

// Getter for birth month
int extPersonType::getBirthMonth() const {
    return birthDate.getMonth(); // Assuming dateType has a getMonth method
}

// Getter for relationship
std::string extPersonType::getRelationship() const {
    return relationship;
}

// Getter for name
std::string extPersonType::getName() const {
    return name;
}
