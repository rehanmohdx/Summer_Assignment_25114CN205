#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0;
    
    cout << "enter number for which we had to find sum" <<endl;
    cin >> n;
    
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout << sum;

return 0;
}