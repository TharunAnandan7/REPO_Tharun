//      finding palindromic sequence: 
#include <iostream>

bool isPalindrome(int n) {
    
    if (n < 0) return false;

    int original = n;
    long long reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = (reversed * 10) + lastDigit;
        n /= 10; 
    }

    return original == reversed;
}

int main() {
    int num = 12321;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome!\n";
    } else {
        std::cout << num << " is NOT a palindrome.\n";
    }

    return 0;
}
