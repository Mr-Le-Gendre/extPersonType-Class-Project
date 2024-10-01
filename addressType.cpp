#include "addressType.h"

// Constructor
addressType::addressType(const std::string& street, const std::string& city, const std::string& state, const std::string& zip)
    : streetAddress(street), city(city), state(state), zipCode(zip) {}

// Setters
void addressType::setAddress(const std::string& street, const std::string& city, const std::string& state, const std::string& zip) {
    streetAddress = street;
    this->city = city;
    this->state = state;
    zipCode = zip;
}

// Getters
std::string addressType::getStreet() const {
    return streetAddress;
}

std::string addressType::getCity() const {
    return city;
}

std::string addressType::getState() const {
    return state;
}

std::string addressType::getZip() const {
    return zipCode;
}

// Print address details
void addressType::displayAddress() const {
    std::cout << streetAddress << ", " << city << ", " << state << " " << zipCode << std::endl;
}
