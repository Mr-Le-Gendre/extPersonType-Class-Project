#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

class dateType {
private:
    int month;
    int day;
    int year;

public:
    // Constructor
    dateType(int month = 1, int day = 1, int year = 2000); // Default values

    // Getters
    int getMonth() const;

    // Print method
    void print() const; // Declaration
};

#endif
