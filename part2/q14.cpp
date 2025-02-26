#include <iostream>

using namespace std;

void printBoundaryElements(int matrix[][4], int rows, int cols) {
    // Print top row
    for (int i = 0; i < cols; ++i) {
        cout << matrix[0][i] << " ";
    }

    // Print right column
    for (int i = 1; i < rows; ++i) {
        cout << matrix[i][cols - 1] << " ";
    }

    // Print bottom row if there is more than one row
    if (rows > 1) {
        for (int i = cols - 2; i >= 0; --i) {
            cout << matrix[rows - 1][i] << " ";
        }
    }

    // Print left column if there is more than one column
    if (cols > 1) {
        for (int i = rows - 2; i > 0; --i) {
            cout << matrix[i][0] << " ";
        }
    }

    cout << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4;
    int cols = 4;

    printBoundaryElements(matrix, rows, cols);

    return 0;
}
