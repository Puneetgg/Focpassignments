#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "Sum of primary diagonal elements: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal elements: " << secondaryDiagonalSum << endl;

    return 0;
}
