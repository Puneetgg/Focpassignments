#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        std::cout << num1 << " is a multiple of " << num2 << std::endl;
    } else {
        std::cout << num1 << " is not a multiple of " << num2 << std::endl;
    }

    return 0;
}