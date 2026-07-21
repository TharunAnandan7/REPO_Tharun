//      finding palindromic sequence: 
#include <iostream>

bool isPalindrome(int n) {
    
    if (n < 0) return false;    // palindrome of -456 gives 654-

    int GetUser = n;
    long long reversed = 0; 

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = (reversed * 10) + lastDigit;
        n /= 10; // Remove the last digit
    } 

    return GetUser == reversed;
}

int main() {
    long long num;

    std :: cout << "Enter the number to get it's palindrome: ";
    std :: cin >> num;

    std :: cout <<"THe palindrome of the entered number " << num  << " is "<<  isPalindrome(num);

    if (isPalindrome(num)) {
        std :: cout << std :: endl;
        std::cout << num << " is a palindrome!\n";
    } else {
        std::cout << num << " is NOT a palindrome.\n";
    }

    return 0;
}
