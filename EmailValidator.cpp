#include <iostream>
#include <string>

bool isValidEmailManual(const std::string& email) {
    // Find the position of '@' and '.'
    size_t at_pos = email.find('@');
    size_t dot_pos = email.find_last_of('.');

    // 1. '@' must exist and cannot be the first character
    // 2. '.' must exist after the '@' symbol
    // 3. There must be at least one character between '@' and '.'
    // 4. There must be at least two characters after the final '.'
    if (at_pos == std::string::npos || at_pos == 0 ||
        dot_pos == std::string::npos || dot_pos < at_pos + 2 ||
        dot_pos + 3 > email.length()) {
        return false;
    }

    return true;
} 

int main() {
    std::string email;

    std :: cout << "Enter the Mail address to validate the basic structure: ";
    std :: cin >> email;
    
    if (isValidEmailManual(email)) {
        std::cout << std :: endl << email << " passes basic validation.\n";
    } else {
        std::cout << email << " fails basic validation.\n";
    }
    
    return 0;
}
