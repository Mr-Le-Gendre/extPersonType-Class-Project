#include "addressBookType.h"
#include <iostream>
#include <algorithm>

// Add a person to the address book
void addressBookType::addEntry(const extPersonType& person) {
    entries.push_back(person);
}

// Print all entries
void addressBookType::print() const {
    for (const auto& person : entries) {
        person.print();
        std::cout << std::endl; // Add a line break between entries
    }
}

// Find a person by name
void addressBookType::findPerson(const std::string& name) const {
    for (const auto& person : entries) {
        if (person.getName() == name) {
            person.print();
            return; // Exit after printing the first match
        }
    }
    std::cout << "Person not found." << std::endl;
}

// Display all entries with a given birth month
void addressBookType::displayBirthdays(int month) const {
    for (const auto& person : entries) {
        if (person.getBirthMonth() == month) {
            person.print();
            std::cout << std::endl; // Add a line break between entries
        }
    }
}

// Display entries with a given relationship tag
void addressBookType::displayByRelationship(const std::string& relationship) const {
    for (const auto& person : entries) {
        if (person.getRelationship() == relationship) {
            person.print();
            std::cout << std::endl; // Add a line break between entries
        }
    }
}
