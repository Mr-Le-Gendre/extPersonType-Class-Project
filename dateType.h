#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>
using namespace std;

class dateType {
private:
    int month;
    int day;
    int year;

    bool isLeapYear(int year) const;  // Helper function
    int getDaysInMonth(int month, int year) const;

public:
    // Default constructor
    dateType();

    // Constructor with parameters
    dateType(int month, int day, int year);

    // Setters
    void setDate(int month, int day, int year);

    // Getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Print function
    void print() const;
};

#endif

