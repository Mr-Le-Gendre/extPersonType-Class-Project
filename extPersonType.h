#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <string>
#include "dateType.h" // Assuming dateType is defined for handling dates

class extPersonType {
private:
    std::string name;
    dateType birthDate; // Assuming dateType handles date information
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    std::string phone;
    std::string relationship;

public:
    // Default constructor
    extPersonType();

    // Parameterized constructor
    extPersonType(const std::string& name, int month, int day, int year,
        const std::string& streetAddress, const std::string& city,
        const std::string& state, const std::string& zipCode,
        const std::string& phone, const std::string& relationship);

    // Method to display person's information
    void print() const;

    // Getters
    int getBirthMonth() const;
    std::string getRelationship() const;
    std::string getName() const;
};

#endif
