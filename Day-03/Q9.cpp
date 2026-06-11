#include <iostream>
using namespace std;

int main(){

    int n, i;
    bool isPrime = true;

    cout << "enter number to be checked whether it is prime or not ";
    cin >> n;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << "it is a prime number" << endl;
    }
    else{
        cout << "it is not a prime number";
}
return 0;
}