#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int i = 1;
        do {
            factorial *= i;
            i++;
        } while (i <= number);

        std::cout << "Factorial of " << number << " = " << factorial << std::endl;
    }

    return 0;
}