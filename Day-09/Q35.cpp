#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin >> n;

    for(i=1;i<=n;i++)
    {
        char ch = 'A'+i-1;

        for(j=1;j<=i;j++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}