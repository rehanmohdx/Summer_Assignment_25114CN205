#include <iostream>
using namespace std;
int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;
    int i, j;
    for (i = 0;i<n-1;i++) {
        int minIndex = i;
        for (j = i + 1;j<n;j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    cout << "Sorted array: ";
    for (i = 0; i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}