#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transpose of the matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}