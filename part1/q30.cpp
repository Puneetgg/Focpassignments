#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 500; ++i) {
        if (i % 3 == 0 && i % 7 == 0) {
            continue;
        }
        
        if (sum + i > 1000) {
            break;
        }

        std::cout << i << " ";
        sum += i;
    }

    std::cout << std::endl;
    return 0;
}