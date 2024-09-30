#include <iostream>
#include "addressBookType.h"

int main() {
    addressBookType addressBook;

    addressBook.initEntries(); // Initialize with some sample entries
    addressBook.print(); // Print all entries

    std::string firstName, lastName;
    std::cout << "Enter first name and last name to search for a person: ";
    std::cin >> firstName >> lastName;

    extPersonType foundPerson = addressBook.findPerson(firstName, lastName);
    if (foundPerson.getFirstName() != "") {
        std::cout << "Found: " << foundPerson << std::endl;
    }
    else {
        std::cout << "Person not found!" << std::endl;
    }

    return 0;
}
