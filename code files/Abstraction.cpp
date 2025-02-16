#include <iostream>
using namespace std;

class Calculator {
public:
    // Method to multiply two matrices
    void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
        // Loop through rows of mat1
        for (int i = 0; i < 3; i++) {
            // Loop through columns of mat2
            for (int j = 0; j < 3; j++) {
                result[i][j] = 0; // Initialize result matrix element
                // Perform multiplication
                for (int k = 0; k < 3; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }

    // Method to print a matrix
    void printMatrix(int mat[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Define two 3x3 matrices
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3]; // To store the result of multiplication

    // Create an object of Calculator
    Calculator calc;

    // Display matrices
    cout << "Matrix 1:" << endl;
    calc.printMatrix(mat1);

    cout << "Matrix 2:" << endl;
    calc.printMatrix(mat2);

    // Perform matrix multiplication
    calc.multiplyMatrices(mat1, mat2, result);

    // Display the result
    cout << "Result of Matrix Multiplication:" << endl;
    calc.printMatrix(result);

    return 0;
}
