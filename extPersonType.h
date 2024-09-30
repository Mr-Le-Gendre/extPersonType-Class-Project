#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <iostream>
#include <string>
#include "dateType.h"
#include "addressType.h"

using namespace std;

class extPersonType {
private:
    string firstName;
    string lastName;
    dateType birthDate;
    addressType address;
    string phoneNumber;
    string relationship;

public:
    // Default constructor
    extPersonType();

    // Constructor with parameters
    extPersonType(string fName, string lName, int bMonth, int bDay, int bYear,
        string street, string city, string state, int zip,
        string phone, string relation);

    // Setters
    void setRelationship(string relation);
    void setPhoneNumber(string phone);

    // Getters
    string getRelationship() const;
    string getPhoneNumber() const;

    // Print function
    void print() const;
};

#endif
