#include <iostream>

bool areOppositeSigns(int x, int y) {
    return (x ^ y) < 0;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (areOppositeSigns(a, b)) {
        std::cout << "The integers have opposite signs." << std::endl;
    } else {
        std::cout << "The integers do not have opposite signs." << std::endl;
    }

    return 0;
}