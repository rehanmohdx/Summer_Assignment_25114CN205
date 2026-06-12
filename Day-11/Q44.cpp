#include <iostream>
using namespace std;

int factorial(int n) {
    int ans = 1;

    for (int i = 1; i <= n; i++) {
        ans = ans * i;
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}