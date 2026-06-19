#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int A[100][100], B[100][100], Sub[100][100];
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction of matrices:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << Sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}