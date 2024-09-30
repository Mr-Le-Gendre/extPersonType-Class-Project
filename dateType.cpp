#include "dateType.h"

dateType::dateType() : day(1), month(1), year(1900) {}

dateType::dateType(int day, int month, int year) : day(day), month(month), year(year) {}

int dateType::getDay() const { return day; }
int dateType::getMonth() const { return month; }
int dateType::getYear() const { return year; }

void dateType::setDate(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

std::istream& operator>>(std::istream& in, dateType& date) {
    in >> date.day >> date.month >> date.year;
    return in;
}

std::ostream& operator<<(std::ostream& out, const dateType& date) {
    out << date.day << "/" << date.month << "/" << date.year;
    return out;
}
