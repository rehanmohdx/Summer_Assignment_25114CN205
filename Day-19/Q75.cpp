#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int arr[100][100], transpose[100][100];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose matrix:\n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}