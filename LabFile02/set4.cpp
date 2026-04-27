#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c], C[r][c];

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "Sum of matrices (C):\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}