#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100];
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter second array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Intersection: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}