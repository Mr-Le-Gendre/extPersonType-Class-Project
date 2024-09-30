#include "addressBookType.h"
#include <fstream>

void addressBookType::addPerson(const extPersonType& person) {
    persons.push_back(person);
}

void addressBookType::initEntries() {
    // Initialize with some sample entries (you can modify or remove this)
    addPerson(extPersonType("John", "Doe", dateType(1, 1, 1990), "Friend"));
    addPerson(extPersonType("Jane", "Smith", dateType(2, 2, 1992), "Sister"));
}

void addressBookType::print() const {
    for (const auto& person : persons) {
        std::cout << person << std::endl;
    }
}

extPersonType addressBookType::findPerson(const std::string& firstName, const std::string& lastName) const {
    for (const auto& person : persons) {
        if (person.getFirstName() == firstName && person.getLastName() == lastName) {
            return person;
        }
    }
    return extPersonType(); // Return an empty person if not found
}

std::vector<extPersonType> addressBookType::findBirthdays(int month) const {
    std::vector<extPersonType> result;
    for (const auto& person : persons) {
        if (person.getBirthDate().getMonth() == month) {
            result.push_back(person);
        }
    }
    return result;
}

std::vector<extPersonType> addressBookType::findRelations(const std::string& relation) const {
    std::vector<extPersonType> result;
    for (const auto& person : persons) {
        if (person.getRelationship() == relation) {
            result.push_back(person);
        }
    }
    return result;
}
