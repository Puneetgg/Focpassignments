#include <iostream>

using namespace std;

const int N = 3; // Define the size of the matrix

void rotateMatrix(int matrix[N][N]) {
    for (int i = 0; i < N / 2; ++i) {
        for (int j = i; j < N - i - 1; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[N - j - 1][i];
            matrix[N - j - 1][i] = matrix[N - i - 1][N - j - 1];
            matrix[N - i - 1][N - j - 1] = matrix[j][N - i - 1];
            matrix[j][N - i - 1] = temp;
        }
    }
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int N = 3;
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}