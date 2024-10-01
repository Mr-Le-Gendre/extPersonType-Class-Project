#include <iostream>
#include "addressBookType.h"
#include "extPersonType.h" // Ensure this is included to use extPersonType

int main() {
    addressBookType myAddressBook;
    extPersonType person; // Make sure this is properly initialized

    // Sample data (assuming extPersonType constructor and necessary setters exist)
    myAddressBook.addEntry(extPersonType("Shelly Malik", 12, 8, 2000, "Lincoln Drive", "Omaha", "NE", "68131", "402-555-1212", "Family"));
    myAddressBook.addEntry(extPersonType("Donald Duck", 10, 6, 1980, "Disney Street", "Orlando", "FL", "11234", "622-873-8920", "Friend"));
    myAddressBook.addEntry(extPersonType("Chelsea Tomak", 12, 8, 1999, "Kennedy Blvd", "Omaha", "NE", "68172", "402-777-8888", "Friend"));
    myAddressBook.addEntry(extPersonType("Goof Goofy", 2, 6, 1965, "Disney Street", "Los Angeles", "CA", "91340", "215-782-9000", "Family"));
    myAddressBook.addEntry(extPersonType("Brave Balto", 2, 6, 1975, "Disney Road", "Orlando", "FL", "35672", "415-782-5555", "Business"));
    myAddressBook.addEntry(extPersonType("Bash Bashfull", 2, 8, 1965, "Long Road", "New York", "NY", "01101", "212-782-8000", "Friend"));

    int choice;

    do {
        std::cout << "On-line Address Book\n";
        std::cout << "Select an option:\n";
        std::cout << "1 – Display all entries in the address book.\n";
        std::cout << "2 – Display an entry by a person’s name.\n";
        std::cout << "3 – Display all entries with a given birth month.\n";
        std::cout << "4 – Display all entries with a given relationship tag (Business, Friend, Family).\n";
        std::cout << "5 – Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            myAddressBook.print(); // Display all entries
            break;
        case 2: {
            std::string name;
            std::cout << "Enter the name of the person: ";
            std::cin >> name; // Or use getline if names have spaces
            myAddressBook.findPerson(name); // Find a person by name
            break;
        }
        case 3: {
            int month;
            std::cout << "Enter the birth month (1-12): ";
            std::cin >> month;
            myAddressBook.displayBirthdays(month); // Display entries with the given birth month
            break;
        }
        case 4: {
            std::string relationship;
            std::cout << "Enter the relationship tag (Business, Friend, Family): ";
            std::cin >> relationship; // Assumes a single word for simplicity
            myAddressBook.displayByRelationship(relationship); // Display entries by relationship
            break;
        }
        case 5:
            std::cout << "Exiting the program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice, please try again." << std::endl;
        }
        std::cout << std::endl; // Add a line break for better readability
    } while (choice != 5);

    return 0;
}
