#include <iostream>
using namespace std;

void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][3], int result[][3], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int matrix[][3], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << " ";
            if (j == column - 1)
                cout << endl;
        }
    }
}

int main() {
    int firstMatrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int secondMatrix[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[3][3];
    int rowFirst = 3, columnFirst = 3, rowSecond = 3, columnSecond = 3;

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    cout << "Resultant Matrix: " << endl;
    display(result, rowFirst, columnSecond);

    return 0;
}