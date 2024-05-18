#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

void addContact(PhoneBook &phoneBook) {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    phoneBook.addContact(newContact);
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            addContact(phoneBook);
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
            std::cout << "Enter index to display: ";
            std::getline(std::cin, command);
            std::stringstream ss(command);
            int index;
            ss >> index;
            if (ss.fail() || !ss.eof()) {
                std::cout << "Invalid index." << std::endl;
            } else {
                phoneBook.displayContact(index);
            }
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}
