#include <iostream>
using namespace std;

int main() {
    int n,original,rev=0,digit;

    cout << "Enter number whose palindrome property is to be checked: ";
    cin >> n;

    original=n;

    while (n != 0) {
        digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }

    if (original==rev) {
        cout << "Number is palindrome";
    } else {
        cout << "Number is not palindrome";
    }

    return 0;
}
    
    
    

