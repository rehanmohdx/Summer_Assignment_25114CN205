#include <iostream>
using namespace std;

int main(){
    int arr1[100], arr2[100], arr[200];
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter first array: ";
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter second array: ";
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    for(int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
    for(int i = 0; i < m; i++)
    {
        arr[n+i] = arr2[i];
    }

    int size = n + m;
    cout << "Union array: ";
    for(int i = 0; i < size; i++)
    {
        bool duplicate = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
        if(duplicate == false)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}