#include <iostream>
#include <cmath>
#include <limits>

bool isRepresentableInBinary(double num) {
    // Check if the number is a power of 2
    double intPart;
    double fracPart = std::modf(num, &intPart);
    if (fracPart == 0.0) {
        return true;
    }

    // Check if the fractional part can be represented exactly in binary
    while (fracPart != 0.0) {
        fracPart *= 2;
        fracPart = std::modf(fracPart, &intPart);
        if (fracPart == 0.0) {
            return true;
        }
    }

    return false;
}

int main() {
    double num;
    std::cout << "Enter a floating-point number: ";
    std::cin >> num;

    if (isRepresentableInBinary(num)) {
        std::cout << num << " can be represented exactly in binary format." << std::endl;
    } else {
        std::cout << num << " cannot be represented exactly in binary format." << std::endl;
    }

    return 0;
}