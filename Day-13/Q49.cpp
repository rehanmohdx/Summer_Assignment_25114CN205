#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
    
    cout << "enter array size" << endl;
    cin >> n;
    
    cout << "enter array elements " << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "array elements are " << endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}