#include <iostream>
using namespace std;

int main() {
    int n,prod=1,digit;
    
    cout << "enter the digit for which we have to find product of a number" << endl;
    cin >> n;
    
    while(n!=0){
        digit=n%10;
        n = n/10;
        prod = prod*digit;
    }
    cout << prod;
}
    