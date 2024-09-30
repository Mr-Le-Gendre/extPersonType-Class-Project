#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include "addressType.h"
#include "dateType.h"
#include <string>

class extPersonType : public addressType {
public:
    extPersonType();
    extPersonType(const std::string& firstName, const std::string& lastName,
        const dateType& birthDate, const std::string& relationship);

    std::string getFirstName() const;
    std::string getLastName() const;
    dateType getBirthDate() const;
    std::string getRelationship() const;

    friend std::istream& operator>>(std::istream& in, extPersonType& person);
    friend std::ostream& operator<<(std::ostream& out, const extPersonType& person);

private:
    std::string firstName;
    std::string lastName;
    dateType birthDate;
    std::string relationship;
};

#endif // EXTPERSONTYPE_H
