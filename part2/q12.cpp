#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxRowIndex = -1;

    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRowIndex = i;
        }
    }

    cout << "The row with the maximum sum is: " << maxRowIndex << endl;
    cout << "The maximum sum is: " << maxSum << endl;

    return 0;
}
