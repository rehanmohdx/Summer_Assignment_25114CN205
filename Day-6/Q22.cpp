#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int digit,ans=0,n,i=0;

    cout << "int number" << endl;
    cin >> n;

while(n!=0){
    digit = n%10;
    if (digit == 1){
        ans = ans + pow(2,i);
    }
        i++;
        n = n/10;
    
}
    cout << "decimal form is " << ans << endl;

    return 0;
}