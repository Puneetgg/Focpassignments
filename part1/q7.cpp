#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping using a temporary variable: a = " << a << ", b = " << b << endl;

    // Swap back without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping without using a temporary variable: a = " << a << ", b = " << b << endl;

    return 0;
}