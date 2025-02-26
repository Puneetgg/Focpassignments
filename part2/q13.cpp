#include <iostream>

bool searchMatrix(int** matrix, int rows, int cols, int target) {
    if (rows == 0 || cols == 0) {
        return false;
    }

    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }

    return false;
}

int main() {
    int rows = 5;
    int cols = 5;
    int matrix[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target = 5;

    // Convert 2D array to array of pointers for the function
    int* matrixPtrs[5];
    for (int i = 0; i < rows; ++i) {
        matrixPtrs[i] = matrix[i];
    }

    if (searchMatrix(matrixPtrs, rows, cols, target)) {
        std::cout << "Target " << target << " found in the matrix." << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the matrix." << std::endl;
    }

    return 0;
}