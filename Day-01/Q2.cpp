#include <iostream>
using namespace std;

int main() {
    int n,i,ans;

    cout << "enter number for which we had to find multiplication table:  " << endl;
    cin >> n;

    for (i=1; i<=n; i++){

        ans = n*i;
 cout << n << "*" << i << "=" << ans << endl;
    }
    return 0;
}