#include <iostream>

int countOneBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int result = countOneBits(number);
    std::cout << "The number of 1 bits in " << number << " is: " << result << std::endl;

    return 0;
}