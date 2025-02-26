#include <iostream>
#include <limits.h>

using namespace std;

void findSaddlePoint(int matrix[][3], int rows, int cols) {
    bool found = false;

    for (int i = 0; i < rows; ++i) {
        int minRow = INT_MAX;
        int colIndex = -1;

        // Find the minimum element in the current row
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        // Check if the found minimum element is the largest in its column
        bool isSaddlePoint = true;
        for (int k = 0; k < rows; ++k) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = false;
                break;
            }
        }

        if (isSaddlePoint) {
            cout << "Saddle point found at (" << i << ", " << colIndex << ") with value " << minRow << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No saddle point found in the matrix." << endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    findSaddlePoint(matrix, 3, 3);

    return 0;
}
