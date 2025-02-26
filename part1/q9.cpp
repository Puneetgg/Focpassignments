#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char character;
    int integer;
    float floatingPoint;

    // Taking inputs
    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;

    // Displaying in formatted table
    cout << setw(10) << "Character" << setw(10) << "Integer" << setw(20) << "Floating-Point" << endl;
    cout << setw(10) << character << setw(10) << integer << setw(20) << floatingPoint << endl;

    return 0;
}