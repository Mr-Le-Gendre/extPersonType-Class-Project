#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

class dateType {
public:
    dateType();
    dateType(int day, int month, int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDate(int day, int month, int year);

    friend std::istream& operator>>(std::istream& in, dateType& date);
    friend std::ostream& operator<<(std::ostream& out, const dateType& date);

private:
    int day;
    int month;
    int year;
};

#endif // DATETYPE_H
