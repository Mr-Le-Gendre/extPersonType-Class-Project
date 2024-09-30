#include "extPersonType.h"

// Default constructor
extPersonType::extPersonType() : firstName(""), lastName(""), phoneNumber(""), relationship("Friend") {}

// Constructor with parameters
extPersonType::extPersonType(string fName, string lName, int bMonth, int bDay, int bYear,
    string street, string city, string state, int zip,
    string phone, string relation)
    : firstName(fName), lastName(lName), birthDate(bMonth, bDay, bYear), address(street, city, state, zip), phoneNumber(phone) {
    setRelationship(relation);
}

// Setters
void extPersonType::setRelationship(string relation) {
    if (relation == "Family" || relation == "Friend" || relation == "Business")
        relationship = relation;
    else
        relationship = "Friend";  // Default value
}

void extPersonType::setPhoneNumber(string phone) {
    phoneNumber = phone;
}

// Getters
string extPersonType::getRelationship() const {
    return relationship;
}

string extPersonType::getPhoneNumber() const {
    return phoneNumber;
}

// Print function
void extPersonType::print() const {
    cout << firstName << " " << lastName << endl;
    birthDate.print();
    address.print();
    cout << phoneNumber << endl;
    cout << relationship << endl;
}
