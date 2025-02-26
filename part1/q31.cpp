#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
        if (isPalindrome(reversed)) {
            cout << "Reversed number is a palindrome: " << reversed << endl;
            return reversed;
        }
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseDigits(num);
    if (!isPalindrome(reversed)) {
        cout << "Reversed number: " << reversed << endl;
    }

    return 0;
}