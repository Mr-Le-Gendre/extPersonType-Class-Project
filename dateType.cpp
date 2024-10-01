#include "dateType.h"

// Constructor implementation
dateType::dateType(int month, int day, int year) : month(month), day(day), year(year) {}

// Getter for month
int dateType::getMonth() const {
    return month;
}

// Print method implementation
void dateType::print() const {
    std::cout << month << " " << day << " " << year; // Change formatting as needed
}
