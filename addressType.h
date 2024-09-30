#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <iostream>
#include <string>
using namespace std;

class addressType {
private:
    string streetAddress;
    string city;
    string state;
    int zipcode;

public:
    // Default constructor
    addressType();

    // Constructor with parameters
    addressType(string street, string city, string state, int zip);

    // Setters
    void setAddress(string street);
    void setCity(string city);
    void setState(string state);
    void setZipcode(int zip);

    // Getters
    string getAddress() const;
    string getCity() const;
    string getState() const;
    int getZipcode() const;

    // Print function
    void print() const;
};

#endif

