#include "extPersonType.h"
#include <iostream>

extPersonType::extPersonType() : firstName(""), lastName(""), relationship("") {}

extPersonType::extPersonType(const std::string& fName, const std::string& lName,
    const dateType& bDate, const std::string& rel)
    : addressType(), firstName(fName), lastName(lName), birthDate(bDate), relationship(rel) {}

std::string extPersonType::getFirstName() const { return firstName; }
std::string extPersonType::getLastName() const { return lastName; }
dateType extPersonType::getBirthDate() const { return birthDate; }
std::string extPersonType::getRelationship() const { return relationship; }

std::istream& operator>>(std::istream& in, extPersonType& person) {
    in >> person.firstName >> person.lastName >> person.birthDate >> person.relationship;
    return in;
}

std::ostream& operator<<(std::ostream& out, const extPersonType& person) {
    out << person.firstName << " " << person.lastName << ", "
        << person.birthDate << ", " << person.relationship;
    return out;
}
