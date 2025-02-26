#include <iostream>
#include <limits.h>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int max = INT_MAX;
    int min = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;

    return 0;
}