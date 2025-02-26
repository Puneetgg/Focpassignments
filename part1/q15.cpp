#include <iostream>
#include <cmath>

int main() {
    int a, b, c, d;
    
    // Taking inputs from the user
    std::cout << "Enter values for a, b, c, and d: ";
    std::cin >> a >> b >> c >> d;
    
    // Calculating a^b and c&d
    int power = pow(a, b);
    int bitwiseAnd = c & d;
    
    // Evaluating the expression (a^b + c&d)
    int result = power + bitwiseAnd;
    
    // Displaying the result
    std::cout << "The result of (a^b + c&d) is: " << result << std::endl;
    
    return 0;
}