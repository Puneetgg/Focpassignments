#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float num1, num2;
    
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    
    if (num2 != 0) {
        float result = num1 / num2;
        cout << "Result: " << fixed << setprecision(2) << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    
    return 0;
}