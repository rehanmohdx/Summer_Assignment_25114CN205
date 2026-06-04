#include <iostream>
using namespace std;

int main() {
    int n,rev=0,digit;
    
    cout << "enter the digit for which we have to find reverse of a number" << endl;
    cin >> n;
    
    while(n!=0){
        digit=n%10;
        n = n/10;
        rev =(rev*10+digit);
    }
    cout << rev;
}