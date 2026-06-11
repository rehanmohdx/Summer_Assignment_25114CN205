#include <iostream>
using namespace std;

int main() {
    int a, b, i, n;

    cout << "Enter least number: ";
    cin >> a;

    cout << "Enter largest number: ";
    cin >> b;

    cout << "Prime numbers are: " << endl;

    for (n=a;n<=b;n++) {

        bool isPrime = true;

        for (i=2;i<n;i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " ";
        }
    }
    return 0;
}