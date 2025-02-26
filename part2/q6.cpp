#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int size, target;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Number found at index " << result << endl;
    } else {
        cout << "Number not found in the array" << endl;
    }

    return 0;
}