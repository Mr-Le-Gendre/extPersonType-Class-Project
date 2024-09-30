#include "addressType.h"
#include <iostream>

addressType::addressType() : street(""), city(""), state(""), zip("") {}

addressType::addressType(const std::string& street, const std::string& city,
    const std::string& state, const std::string& zip)
    : street(street), city(city), state(state), zip(zip) {}

std::string addressType::getStreet() const { return street; }
std::string addressType::getCity() const { return city; }
std::string addressType::getState() const { return state; }
std::string addressType::getZip() const { return zip; }

void addressType::setStreet(const std::string& street) { this->street = street; }
void addressType::setCity(const std::string& city) { this->city = city; }
void addressType::setState(const std::string& state) { this->state = state; }
void addressType::setZip(const std::string& zip) { this->zip = zip; }

std::istream& operator>>(std::istream& in, addressType& address) {
    in >> address.street >> address.city >> address.state >> address.zip;
    return in;
}

std::ostream& operator<<(std::ostream& out, const addressType& address) {
    out << address.street << ", " << address.city << ", " << address.state << " " << address.zip;
    return out;
}
