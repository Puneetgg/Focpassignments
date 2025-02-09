#include <iostream>
using namespace std;

void revarray(const int* arr, int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void find(const int* arr, int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }

    int firstSmallest = INT_MAX, secsmall = INT_MAX;
    int firstLargest = INT_MIN, seclarge = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < firstSmallest) {
            secsmall = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secsmall && arr[i] != firstSmallest) {
            secsmall = arr[i];
        }

        if (arr[i] > firstLargest) {
            seclarge = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > seclarge && arr[i] != firstLargest) {
            seclarge = arr[i];
        }
    }

    cout << "Second smallest element: " << secsmall << endl;
    cout << "Second largest element: " << seclarge << endl;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    revarray(arr, size);
    find(arr, size);
    return 0;
}