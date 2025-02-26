#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += std::pow(digit, n);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    int startRange, endRange;

    std::cout << "Enter the start of the range: ";
    std::cin >> startRange;
    std::cout << "Enter the end of the range: ";
    std::cin >> endRange;

    std::cout << "Armstrong numbers between " << startRange << " and " << endRange << " are: " << std::endl;

    for (int i = startRange; i <= endRange; ++i) {
        if (isArmstrong(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}