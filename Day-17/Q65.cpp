#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter first array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter second array elements: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < m; i++)
    {
        arr3[n+i] = arr2[i];
    }

    cout << "Merged array: ";
    for(int i = 0; i < n+m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}