#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int bit,ans=0,n,i=0;

    cout << "int number" << endl;
    cin >> n;

    while (n!=0) {

        bit=n&1;

        ans = bit*pow(10, i) + ans;

        n = n >> 1;
        i++;
    }

    cout << "binary form is " << ans << endl;

    return 0;
}