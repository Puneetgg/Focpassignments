#include <iostream>
using namespace std;
#include <unordered_set>

void removeDuplicates(int arr[], int& n) {
    unordered_set<int> seen;
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[index++] = arr[i];
        }
    }

    n = index;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
