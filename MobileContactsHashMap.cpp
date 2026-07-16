#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <limits>

class ContactBook {
private:
    std::unordered_map<std::string, std::string> contacts;

public:
    void addContact(const std::string& name, const std::string& number) {
        contacts[name] = number;
        std::cout << "Contact added: " << name << " -> " << number << "\n";
    }

    void searchContact(const std::string& name) const {
        auto it = contacts.find(name);
        if (it != contacts.end()) {
            std::cout << "Found contact: " << it->first << " -> " << it->second << "\n";
        } else {
            std::cout << "Contact '" << name << "' not found." << std::endl;
        }
    }

    void removeContact(const std::string& name) {
        auto it = contacts.find(name);
        if (it != contacts.end()) {
            contacts.erase(it);
            std::cout << "Removed contact: " << name << "\n";
        } else {
            std::cout << "Contact '" << name << "' does not exist." << std::endl;
        }
    }

    void displayAll() const {
        if (contacts.empty()) {
            std::cout << "Contact list is empty." << std::endl;
            return;
        }

        std::cout << "\nStored contacts:\n";
        for (const auto& entry : contacts) {
            std::cout << "- " << entry.first << " : " << entry.second << "\n";
        }
    }
};

bool isValidMobileNumber(const std::string& number) {
    if (number.empty() || number.size() > 15) {
        return false;
    }
    for (char ch : number) {
        if (!std::isdigit(static_cast<unsigned char>(ch))) {
            return false;
        }
    }
    return true;
}

int main() {
    ContactBook phonebook;
    int choice = 0;

    while (true) {
        std::cout << "\nMobile Contacts using Hash Map\n";
        std::cout << "1. Add contact\n";
        std::cout << "2. Search contact by name\n";
        std::cout << "3. Remove contact\n";
        std::cout << "4. Display all contacts\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 5) {
            std::cout << "Terminating phonebook." << std::endl;
            break;
        }

        switch (choice) {
            case 1: {
                std::string name;
                std::string number;
                std::cout << "Enter contact name: ";
                std::getline(std::cin, name);
                std::cout << "Enter mobile number: ";
                std::getline(std::cin, number);

                if (name.empty()) {
                    std::cout << "Name cannot be empty." << std::endl;
                    break;
                }
                if (!isValidMobileNumber(number)) {
                    std::cout << "Invalid mobile number. Please enter only digits." << std::endl;
                    break;
                }

                phonebook.addContact(name, number);
                break;
            }
            case 2: {
                std::string name;
                std::cout << "Enter name to search: ";
                std::getline(std::cin, name);
                if (name.empty()) {
                    std::cout << "Name cannot be empty." << std::endl;
                    break;
                }
                phonebook.searchContact(name);
                break;
            }
            case 3: {
                std::string name;
                std::cout << "Enter name to remove: ";
                std::getline(std::cin, name);
                if (name.empty()) {
                    std::cout << "Name cannot be empty." << std::endl;
                    break;
                }
                phonebook.removeContact(name);
                break;
            }
            case 4:
                phonebook.displayAll();
                break;
            default:
                std::cout << "Invalid option. Please choose from 1 to 5." << std::endl;
                break;
        }
    }

    return 0;
}
