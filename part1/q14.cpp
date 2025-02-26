#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    // Input the sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}