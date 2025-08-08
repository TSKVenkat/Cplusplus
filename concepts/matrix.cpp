#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout << "enter the size of row: ";
    cin >> row;
    cout << "enter the size of column: ";
    cin >> col;

    int matrix1[row][col];
    cout << "first matrix\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "enter the " << i+1 << " row and " << j+1 << " column element: ";
            cin >> matrix1[i][j];
        }
    }

    int matrix2[row][col];
    cout << "second matrix\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "enter the " << i+1 << " row and " << j+1 << " column element: ";
            cin >> matrix2[i][j];
        }
    }

    cout << "addition of two matrices\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "subtraction of two matrices\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix1[i][j] - matrix2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
