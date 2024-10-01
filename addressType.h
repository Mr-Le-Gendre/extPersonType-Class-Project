#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>
#include <iostream>

class addressType {
public:
    // Constructor
    addressType(const std::string& street, const std::string& city, const std::string& state, const std::string& zip);

    // Setters
    void setAddress(const std::string& street, const std::string& city, const std::string& state, const std::string& zip);

    // Getters
    std::string getStreet() const;
    std::string getCity() const;
    std::string getState() const;
    std::string getZip() const;

    // Print address details
    void displayAddress() const;

private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
};

#endif
