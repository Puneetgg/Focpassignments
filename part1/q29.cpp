#include <iostream>

int main() {
    int number = 51; // Start checking from 51 as we need a number greater than 50

    while (number % 7 != 0) {
        number++;
    }

    std::cout << "The first number greater than 50 that is divisible by 7 is: " << number << std::endl;

    return 0;
}