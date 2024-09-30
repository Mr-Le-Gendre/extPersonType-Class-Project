#include "dateType.h"

// Helper functions
bool dateType::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dateType::getDaysInMonth(int month, int year) const {
    switch (month) {
    case 2:
        return isLeapYear(year) ? 29 : 28;
    case 4: case 6: case 9: case 11:
        return 30;
    default:
        return 31;
    }
}

// Default constructor
dateType::dateType() : month(1), day(1), year(1900) {}

// Constructor with parameters
dateType::dateType(int m, int d, int y) {
    setDate(m, d, y);
}

// Setters
void dateType::setDate(int m, int d, int y) {
    if (y >= 1900)
        year = y;
    else
        year = 1900;

    if (m >= 1 && m <= 12)
        month = m;
    else
        month = 1;

    int daysInMonth = getDaysInMonth(month, year);
    if (d >= 1 && d <= daysInMonth)
        day = d;
    else
        day = 1;
}

// Getters
int dateType::getMonth() const { return month; }
int dateType::getDay() const { return day; }
int dateType::getYear() const { return year; }

// Print function
void dateType::print() const {
    cout << month << "-" << day << "-" << year << endl;
}
