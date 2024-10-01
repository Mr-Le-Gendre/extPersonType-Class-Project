#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include <vector>
#include <string>
#include "extPersonType.h"

class addressBookType {
private:
    std::vector<extPersonType> entries; // Vector to hold the entries

public:
    void addEntry(const extPersonType& person);
    void print() const;
    void findPerson(const std::string& name) const;
    void displayBirthdays(int month) const;
    void displayByRelationship(const std::string& relationship) const;
};

#endif
