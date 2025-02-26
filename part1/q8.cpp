#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int age;

    // Get the user's full name
    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Get the user's age
    cout << "Enter your age: ";
    cin >> age;

    // Calculate the number of days lived
    int daysLived = age * 365;

    // Display the greeting
    cout << "Hello, " << fullName << "! You have lived for " << daysLived << " days." << endl;

    return 0;
}