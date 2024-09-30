#include "addressType.h"

// Default constructor
addressType::addressType() : streetAddress(""), city(""), state("XX"), zipcode(10000) {}

// Constructor with parameters
addressType::addressType(string street, string city, string state, int zip) {
    streetAddress = street;
    this->city = city;
    setState(state);
    setZipcode(zip);
}

// Setters
void addressType::setAddress(string street) {
    streetAddress = street;
}

void addressType::setCity(string city) {
    this->city = city;
}

void addressType::setState(string state) {
    if (state.length() == 2)
        this->state = state;
    else
        this->state = "XX";  // Default value
}

void addressType::setZipcode(int zip) {
    if (zip >= 11111 && zip <= 99999)
        zipcode = zip;
    else
        zipcode = 10000;  // Default value
}

// Getters
string addressType::getAddress() const {
    return streetAddress;
}

string addressType::getCity() const {
    return city;
}

string addressType::getState() const {
    return state;
}

int addressType::getZipcode() const {
    return zipcode;
}

// Print function
void addressType::print() const {
    cout << streetAddress << endl;
    cout << city << ", " << state << " " << zipcode << endl;
}
