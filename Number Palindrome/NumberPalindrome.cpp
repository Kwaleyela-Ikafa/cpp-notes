// Given an integer x, return true if x is a palindrome, and false otherwise.
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false; // negative numbers are not palindromes
    }
    int reversed = 0;
    int temp = x;
    while(temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return (reversed == x);
}

int main() {
    int num = 12321;
    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }
    return 0;
}
