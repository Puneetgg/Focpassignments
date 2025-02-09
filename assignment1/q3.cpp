#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    string original = "";
    for (char c : str) {
        if (c != ' ') {
            original += tolower(c);
        }
    }
    string reversed = original;
    int n = reversed.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversed[i], reversed[n - i - 1]);
    }
    return original == reversed;
}

// Function to count the frequency of each character in the string
void countFrequency(string str) {
    int freq[256] = {0};
    for (char c : str) {
        if (c != ' ') {
            freq[tolower(c)]++;
        }
    }
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }
}

// Function to replace all vowels in the string with a specific character
string replaceVowels(string str, char replacement) {
    string vowels = "aeiouAEIOU";
    for (char &c : str) {
        for (char v : vowels) {
            if (c == v) {
                c = replacement;
                break;
            }
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the string is a palindrome
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    // Count and display the frequency of each character
    cout << "Character frequencies:" << endl;
    countFrequency(input);

    // Replace vowels in the string
    char replacement;
    cout << "Enter a character to replace vowels with: ";
    cin >> replacement;
    string replacedString = replaceVowels(input, replacement);
    cout << "String after replacing vowels: " << replacedString << endl;

    return 0;
}