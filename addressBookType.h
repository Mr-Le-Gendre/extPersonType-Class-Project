#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include "extPersonType.h"
#include <vector>
#include <string>
#include <iostream>

class addressBookType {
public:
    void addPerson(const extPersonType& person);
    void initEntries();
    void print() const;
    extPersonType findPerson(const std::string& firstName, const std::string& lastName) const;
    std::vector<extPersonType> findBirthdays(int month) const;
    std::vector<extPersonType> findRelations(const std::string& relation) const;

private:
    std::vector<extPersonType> persons;
};

#endif // ADDRESSBOOKTYPE_H
